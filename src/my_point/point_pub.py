import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from std_msgs.msg import Header
from sensor_msgs.msg import PointField
import struct
import numpy as np

class PointCloudPublisher(Node):
    def __init__(self):
        super().__init__('point_node')
        self.publisher = self.create_publisher(PointCloud2, 'pointcloud', 10)
        self.timer = self.create_timer(1.0, self.publish_point_cloud)  # Set the timer to 1.0 second

        self.point_cloud_data = self.load_point_cloud_data_from_txt()

    def load_point_cloud_data_from_txt(self):
        try:
            with open('/home/kanja-koduki/buck_ws/src/my_point/my_point/point_cloud.txt', 'r') as file:
                lines = file.readlines()
                point_cloud_data = []
                for line in lines:
                    values = line.split()
                    x = float(values[0])
                    y = float(values[1])
                    z = float(values[2])
                    roll = float(values[3])
                    pitch = float(values[4])
                    yaw = float(values[5])
                    point_cloud_data.extend([x, y, z, roll, pitch, yaw])
                return np.array(point_cloud_data)
        except FileNotFoundError:
            self.get_logger().error('point_cloud.txt not found.')
            return None

    def publish_point_cloud(self):
        if self.point_cloud_data is not None:
            msg = PointCloud2()
            msg.header = Header()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'base_link'  # Set the appropriate frame ID

            msg.height = 1
            msg.width = len(self.point_cloud_data) // 6  # Six values per point (X, Y, Z, roll, pitch, yaw)

            msg.fields.append(PointField(name="x", offset=0, datatype=7, count=1))
            msg.fields.append(PointField(name="y", offset=4, datatype=7, count=1))
            msg.fields.append(PointField(name="z", offset=8, datatype=7, count=1))
            msg.fields.append(PointField(name="roll", offset=12, datatype=7, count=1))
            msg.fields.append(PointField(name="pitch", offset=16, datatype=7, count=1))
            msg.fields.append(PointField(name="yaw", offset=20, datatype=7, count=1))

            msg.is_bigendian = False
            msg.point_step = 24  # Size of each point (6 floats x 4 bytes)
            msg.row_step = 24 * len(self.point_cloud_data) // 6  # Six values per point
            msg.is_dense = True

            msg.data = struct.pack('<{}f'.format(len(self.point_cloud_data)), *self.point_cloud_data)

            self.publisher.publish(msg)
            self.get_logger().info('Published point cloud data')

def main(args=None):
    rclpy.init(args=args)
    node = PointCloudPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

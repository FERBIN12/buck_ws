import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from octomap_msgs.msg import Octomap
from octomap_msgs.srv import GetOctomap
from sensor_msgs import point_cloud2
from octomap import Octomap as PyOctomap
from octomap import PointCloud

class PointCloudMappingNode(Node):
    def __init__(self):
        super().__init__('point_cloud_mapping_node')

        # Create subscribers for PointCloud2 data
        self.pointcloud_sub = self.create_subscription(
            PointCloud2, '/camera/points', self.pointcloud_callback, 10)
        
        self.get_logger().info('Subscribed to /camera/points')

        # Create a publisher for the 3D map
        self.map_pub = self.create_publisher(Octomap, '/3d_map', 10)

        # Initialize the OctoMap
        self.octomap = PyOctomap(0.05)  # You can adjust the resolution as needed
        self.initialized_map = False

    def pointcloud_callback(self, msg):
        if not self.initialized_map:
            # If the map has not been initialized, create a new OctoMap
            self.octomap = PyOctomap(0.05)  # You can adjust the resolution as needed
            self.initialized_map = True

        # Process the incoming PointCloud2 data and update the 3D map
        point_cloud_data = self.process_pointcloud(msg)
        self.update_octomap(point_cloud_data, msg.header.frame_id)

    def process_pointcloud(self, msg):
        # Extract point cloud data from the PointCloud2 message
        point_cloud = []
        for p in point_cloud2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True):
            point_cloud.append((p[0], p[1], p[2]))
        return point_cloud

    def update_octomap(self, point_cloud_data, frame_id):
        # Convert point cloud data to OctoMap's PointCloud
        octomap_point_cloud = PointCloud()
        for point in point_cloud_data:
            octomap_point_cloud.push_back(point[0], point[1], point[2])

        # Update the OctoMap with the new point cloud data
        self.octomap.insertPointCloud(octomap_point_cloud, frame_id)

        # Publish the updated 3D map
        octomap_msg = self.octomap.binary_map(msg.header.frame_id)
        self.map_pub.publish(octomap_msg)

def main(args=None):
    rclpy.init(args=args)
    node = PointCloudMappingNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()

if __name__ == '__main__':
    main()

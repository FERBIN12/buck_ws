#!/usr/bin/env python

import rclpy
from sensor_msgs.msg import PointCloud2, PointField
from rclpy.time import Time
from rclpy.node import Node
from std_msgs.msg import Header
import struct
import numpy as np

class PcdToPointcloudNode(Node):
    def __init__(self):
        super().__init__('pcd_to_pointcloud_node')
        self.publisher = self.create_publisher(PointCloud2, '/pointcloud', 10)

    def pcd_to_pointcloud(self, pcd_file_path, header):
        # Load PCD file
        points = np.loadtxt(pcd_file_path, delimiter=" ", skiprows=11, usecols=(0, 1, 2))

        # Create PointCloud2 message
        fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
        ]
        cloud_msg = self.create_cloud_xyz32(header, fields, points)

        # Publish PointCloud2 message
        self.publisher.publish(cloud_msg)

    def create_cloud_xyz32(self, header, fields, points):
        data = []
        for p in points:
            data.extend([p[0], p[1], p[2]])

        cloud_msg = PointCloud2()
        cloud_msg.header = header
        cloud_msg.height = 1
        cloud_msg.width = len(points)
        cloud_msg.is_dense = True
        cloud_msg.is_bigendian = False
        cloud_msg.fields = fields
        cloud_msg.point_step = len(fields) * 4
        cloud_msg.row_step = cloud_msg.point_step * cloud_msg.width
        cloud_msg.data = struct.pack('f' * len(data), *data)

        return cloud_msg

def main(args=None):
    rclpy.init(args=args)
    node = PcdToPointcloudNode()

    # Specify the path to your PCD file
    pcd_file_path = '/home/kanja-koduki/final_plane_seg.pcd'

    # Create a Header instance
    header = Header()
    header.stamp = node.get_clock().now().to_msg()
    header.frame_id = 'base_link'

    # Publish PointCloud2 message
    node.pcd_to_pointcloud(pcd_file_path, header)

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

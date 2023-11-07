#!/usr/bin/env python

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import math
import time  # Add the time module

class LidarPublisher(Node):
    def __init__(self):
        super().__init__('lidar_publisher')
        self.lidar_pub = self.create_publisher(LaserScan, '/scan', 10)
        self.timer = self.create_timer(1.0 / 5, self.publish_lidar_data)  # 5 Hz update rate
        self.scan_msg = LaserScan()

        self.scan_msg.header.frame_id = 'lidar_frame'  # Frame ID must match the one in your URDF
        self.scan_msg.angle_min = -math.pi
        self.scan_msg.angle_max = math.pi
        self.scan_msg.angle_increment = (2 * math.pi) / 360  # 360 samples
        self.scan_msg.range_min = 0.3
        self.scan_msg.range_max = 12.0

    def publish_lidar_data(self):
        # Simulate lidar scan data (replace this with your own data)
        ranges = [4.0] * 360  # In this example, all points are at 4.0 meters
        self.scan_msg.ranges = ranges

        # Add a delay to the timestamp to ensure messages are not dropped
        self.scan_msg.header.stamp = self.get_clock().now().to_msg()
        time.sleep(0.05)  # Add a small delay (adjust as needed)
        
        self.lidar_pub.publish(self.scan_msg)

def main(args=None):
    rclpy.init(args=args)
    lidar_publisher = LidarPublisher()
    rclpy.spin(lidar_publisher)
    lidar_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

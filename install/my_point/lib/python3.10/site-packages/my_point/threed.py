import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from nav_msgs.msg import OccupancyGrid
from std_msgs.msg import Header
import numpy as np
import cv2

class PointCloudToGrid(Node):
    def __init__(self):
        super().__init__('pointcloud_to_grid')
        self.subscription = self.create_subscription(
            PointCloud2,
            'input_pointcloud_topic',  # Replace with your 3D point cloud topic
            self.process_point_cloud,
            10)
        self.publisher = self.create_publisher(OccupancyGrid, 'output_grid_topic', 10)
        self.grid_resolution = 0.1  # Adjust this value as needed
        self.grid_size_x = int(20 / self.grid_resolution)  # Adjust grid size as needed
        self.grid_size_y = int(20 / self.grid_resolution)
        self.occupancy_grid = np.zeros((self.grid_size_x, self.grid_size_y), dtype=np.int8)

    def process_point_cloud(self, msg):
        for point in PointCloud2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True):
            x, y, z = point
            if 0 <= x < self.grid_size_x and 0 <= y < self.grid_size_y:
                grid_x = int(x / self.grid_resolution)
                grid_y = int(y / self.grid_resolution)
                self.occupancy_grid[grid_x, grid_y] = 100  # Occupied cell (adjust intensity as needed)

        self.publish_occupancy_grid(msg.header, self.occupancy_grid)

    def publish_occupancy_grid(self, header, occupancy_grid):
        grid_msg = OccupancyGrid()
        header.stamp = self.get_clock().now().to_msg()
        grid_msg.header = header
        grid_msg.info.width = self.grid_size_x
        grid_msg.info.height = self.grid_size_y
        grid_msg.info.resolution = self.grid_resolution
        grid_msg.info.origin.position.x = 0.0
        grid_msg.info.origin.position.y = 0.0
        grid_msg.info.origin.position.z = 0.0

        occupancy_grid = np.flip(occupancy_grid, axis=0)  # Flip the grid to match orientation
        occupancy_grid = (occupancy_grid * 100).astype(np.int8)  # Scale occupancy values

        grid_msg.data = occupancy_grid.reshape(-1).tolist()

        self.publisher.publish(grid_msg)

def main(args=None):
    rclpy.init(args=args)
    node = PointCloudToGrid()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

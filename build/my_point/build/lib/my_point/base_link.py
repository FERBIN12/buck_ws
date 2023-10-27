import rclpy
from rclpy.node import Node
import tf2_ros
import tf2_geometry_msgs
import geometry_msgs.msg

class BaseLinkPublisher(Node):
    def __init__(self):
        super().__init__('base_link_publisher')
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        self.timer = self.create_timer(0.1, self.publish_base_link)

    def publish_base_link(self):
        # Create a TransformStamped message
        transform_stamped = geometry_msgs.msg.TransformStamped()

        # Set the header
        transform_stamped.header.stamp = self.get_clock().now().to_msg()
        transform_stamped.header.frame_id = 'world'  # The parent frame (e.g., "world")
        transform_stamped.child_frame_id = 'base_link'  # The child frame (e.g., "base_link")

        # Set the transformation
        transform_stamped.transform.translation.x = 0.0
        transform_stamped.transform.translation.y = 0.0
        transform_stamped.transform.translation.z = 0.0
        transform_stamped.transform.rotation.w = 1.0

        # Broadcast the transformation
        self.tf_broadcaster.sendTransform(transform_stamped)

def main(args=None):
    rclpy.init(args=args)
    node = BaseLinkPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

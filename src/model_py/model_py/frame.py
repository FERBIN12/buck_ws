import rclpy
from rclpy.node import Node
import tf2_ros
import geometry_msgs.msg

class LaserFramePublisher(Node):
    def __init__(self):
        super().__init__('laser_frame_publisher')
        self.br = tf2_ros.TransformBroadcaster(self)

    def publish_laser_frame(self):
        transform_stamped = geometry_msgs.msg.TransformStamped()
        transform_stamped.header.stamp = self.get_clock().now().to_msg()
        transform_stamped.header.frame_id = 'base_frame'  # Parent frame
        transform_stamped.child_frame_id = 'laser'  # Child frame
        transform_stamped.transform.translation.x = 0.0  # X position
        transform_stamped.transform.translation.y = 0.0  # Y position
        transform_stamped.transform.translation.z = 0.0  # Z position
        transform_stamped.transform.rotation.x = 0.0  # Quaternion X
        transform_stamped.transform.rotation.y = 0.0  # Quaternion Y
        transform_stamped.transform.rotation.z = 0.0  # Quaternion Z
        transform_stamped.transform.rotation.w = 1.0  # Quaternion W

        self.br.sendTransform(transform_stamped)

def main(args=None):
    rclpy.init(args=args)
    node = LaserFramePublisher()
    
    while rclpy.ok():
        node.publish_laser_frame()
        rclpy.spin_once(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

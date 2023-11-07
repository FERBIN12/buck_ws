import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from PIL import Image as PILImage
import numpy as np

class PixyCamNode(Node):
    def __init__(self):
        super().__init__('pixy_cam_node')
        self.publisher = self.create_publisher(Image, 'pixy_cam/image', 10)
        self.bridge = CvBridge()

    def capture_and_publish(self):
        # Create a simple red image (640x480) in BGR format for testing
        width, height = 640, 480
        image = PILImage.new('RGB', (width, height), 'red')
        image = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)

        img_msg = self.bridge.cv2_to_imgmsg(image, 'bgr8')
        self.publisher.publish(img_msg)

def main(args=None):
    rclpy.init(args=args)
    node = PixyCamNode()

    while rclpy.ok():
        node.capture_and_publish()
        rclpy.spin_once(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from std_msgs.msg import String
from dobot_teleop.keyboard import Keyboard
from dobot_magician_interface.msg import TeleopAction
# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node

# The class name is up to you
class KeyboardTeleop(Node):

    def __init__(self):
        self.kb = Keyboard()
        super().__init__('dobot_teleop_keyboard')
        # Publishers are created using interface type, topic name and QoS setting
        # (the value of 10 can be left as is)
        self.publisher = self.create_publisher(TeleopAction, 'teleop_keyboard', 10)
        # Publishers typically publish message at a predefined rate
        timer_period = 0.01
        # The timer_callback function will be called every timer_period seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.action_timer = self.create_timer(timer_period, self.action_callback)
        # Define variables used by the node here, for example a simple counter
        self.i = 0
        self.key_pressed = (None,None,False)
        self.cartisian = True
  
    def timer_callback(self):
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)
        msg = TeleopAction()
        key = self.kb.read_key()
        if key[0] is not None:
            self.get_logger().info(f"key {key}")
            if(key[1] == 1):
                self.key_pressed = (key[0],key[1],True)
            if(key[1] == 0):
                self.key_pressed = (key[0],key[1],False)
                msg.key = self.key_pressed[0]
                msg.state = self.key_pressed[1]
                msg.cartisian = self.cartisian 
                self.publisher.publish(msg)
                
        
        if(self.key_pressed[2] is True ):
            msg.key = self.key_pressed[0]
            msg.state = self.key_pressed[1]
            msg.cartisian = self.cartisian 
            self.publisher.publish(msg)
            self.get_logger().info(f"key_pressed{self.key_pressed}")
                        
    def action_callback(self):
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)
        pass
        

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = KeyboardTeleop()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()

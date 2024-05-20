# The following imports are necessary
import math
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Pose
from math import radians
from geometry_msgs.msg import Quaternion
from geometry_msgs.msg import Point
from dobot_magician.dobot_kinematics_test_copy import forward_kinematics_solution
from dobot_magician.dobot_kinematics_test_copy import inverse_kinematics
# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node
from dobot_magician.dobot_client import DobotClient
# The class name is up to you
class DobotState(Node):

    def __init__(self):
        super().__init__('dobot_state')
        # Publishers are created using interface type, topic name and QoS setting
        # (the value of 10 can be left as is)
        self.publisher = self.create_publisher(JointState, 'dobot_state', 10)
        self.publisher2 = self.create_publisher(Pose, 'dobot_pose', 10)
        # Publishers typically publish message at a predefined rate
        timer_period = 0.2
        # The timer_callback function will be called every timer_period seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.timer2 = self.create_timer(0.2, self.timer2_callback)
        # Define variables used by the node here, for example a simple counter
        self.i = 0

    def timer_callback(self):
        dobot = DobotClient()
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)
        msg = JointState()
        
        msg.name = ['J1','J2','J3','J4']
        jointState = dobot.get_joint_state()

        msg.position = (jointState[0]*(3.1415/180.0),
                        jointState[1]*(3.1415/180.0),
                        jointState[2]*(3.1415/180.0),
                        jointState[3]*(3.1415/180.0))
        self.publisher.publish(msg)
        self.i += 1

    def timer2_callback(self):
        msg = Pose()
        dobot = DobotClient()
        # To publish a message, you need to create the corresponding object first
        # The name is the same as interface name (e.g., String or My_message)
      
        

        jointState = dobot.get_joint_state()
        xyzw = forward_kinematics_solution(jointState[0], jointState[1],jointState[2],jointState[3])
        print(type(xyzw))
        msg.position = Point(x = xyzw[0], y = xyzw[1], z = xyzw[2])
        msg.orientation = Quaternion(x = 0.0, y = 0.0, z = math.sin(xyzw[3]/2), w = math.cos(xyzw[3]/2))
        
        self.publisher2.publish(msg)
        
        
        
        # Logger displays formatted text in the console, useful for simple debugging
        
        


# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = DobotState()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()

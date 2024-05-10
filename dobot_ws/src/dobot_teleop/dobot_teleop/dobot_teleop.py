# The following imports are necessary
import rclpy
from rclpy.node import Node

# Replace the following import with the interface this node is using
from std_msgs.msg import String
from dobot_magician_interface.msg import TeleopAction
from dobot_magician.dobot_client import DobotClient
from dobot_magician.dobot_kinematics_test_copy import inverse_kinematics
from dobot_magician.dobot_kinematics_test_copy import forward_kinematics_solution
# For example, the custom message type from my_interface_package
# in Milestone 3 handout document could be imported as follows:
# 
# from my_interface_package.msg import My_message

# You can import here any Python module you plan to use in this node

# The class name is up to you
XMIN,YMIN,ZMIN,RMIN = forward_kinematics_solution(90,70,40,90) 
XMAX,YMAX,ZMAX,RMAX= forward_kinematics_solution(-90,0,-15,-90)
XMAX = forward_kinematics_solution(0,70,-15,-90)[0]

class MyClassName(Node):

    def __init__(self):
        super().__init__('dobot_teleop')
        self.dobot = DobotClient()
        # Subscribers are created using interface type, topic name, callback function, and QoS setting
        # (the value of 10 can be left as is)
        self.subscription = self.create_subscription(
            TeleopAction,
            'teleop_keyboard',
            self.listener_callback,
            10)
        self.timer = self.create_timer(0.01, self.timer_callback)
        self.timer = self.create_timer(0.5, self.timer_callback2)
        self.joint_1 = -90
        self.joint_2 = 0
        self.joint_3 = 0
        self.joint_4 = 0
        self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        # 0 means stay still 
        # 
        self.robot_state = {
            "isCartisian": False,
            "KEY_UP": 0,
            "KEY_DOWN": 0,
            "KEY_LEFT": 0,
            "KEY_RIGHT": 0,
        }
        self.dobot.set_joint_ptp(-90,0,-15,-90)
        self.keys_being_ppressed = []


    

        
    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback(self, msg):
        dobot = self.dobot
        # Logger displays formatted text in the console, useful for simple debugging
        ammount = 1
        cartesianAmmount = 0.001
        key = msg.key
        state = msg.state
        isCartisian = msg.cartisian
        valid = False
        #self.get_logger().info(f"BEFORE {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        if( state == 0):
            self.get_logger().info(f"{key}")
            self.dobot.stop_current_action()
            self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
            self.keys_being_ppressed = []
        else:    
            if key == "KEY_LEFT":
                if key not in self.keys_being_ppressed:
                    self.dobot.stop_current_action()
                    self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
                    self.keys_being_ppressed.append(key)
                    
                #self.get_logger().info(f"IN LEFT")
                self.joint_1 = self.joint_1 - 1
            if key == "KEY_RIGHT":
                if key not in self.keys_being_ppressed:
                    self.dobot.stop_current_action()
                    self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
                    self.keys_being_ppressed.append(key)
                    
                #self.get_logger().info(f"IN RIGHJT")
                self.joint_1 = self.joint_1 + 1     
            if key == "KEY_UP":
                if key not in self.keys_being_ppressed:
                    self.dobot.stop_current_action()
                    self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
                    self.keys_being_ppressed.append(key)
                    self.joint_2 = self.joint_2 - 40
                #self.get_logger().info(f"IN LEFT")
                
                self.joint_2 = self.joint_2 - 1
            if key == "KEY_DOWN":
                if key not in self.keys_being_ppressed:
                    self.dobot.stop_current_action()
                    self.joint_1,self.joint_2,self.joint_3,self.joint_4, = self.dobot.get_joint_state()
                    self.keys_being_ppressed.append(key)
                        
                #self.get_logger().info(f"IN RIGHJT")
                

                self.joint_2 = self.joint_2 + 1       
        self.get_logger().info(f"{self.keys_being_ppressed}")
                # valid = self.dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4)
        #self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.x,self.y,self.z,self.r}")
      
        #dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)

    def timer_callback(self):
        if(self.robot_state["KEY_LEFT"] == 1):
            self.joint_1 = self.joint_1 - 0.1
            
        elif(self.robot_state["KEY_RIGHT"] == 1):
            self.joint_1 = self.joint_1 + 0.1            
        #self.joint_1 = self.joint_1 + 1
        
    def timer_callback2(self):
        
        
        self.dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()

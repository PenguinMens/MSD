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
        self.joint_1 = 0
        self.joint_2 = 0
        self.joint_3 = 0
        self.joint_4 = 0
        self.x, self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)

    

        
    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback(self, msg):
        dobot = self.dobot
        # Logger displays formatted text in the console, useful for simple debugging
        ammount = 0.1
        cartesianAmmount = 0.001
        key = msg.key
        state = msg.state
        isCartisian = msg.cartisian
        valid = False
        self.get_logger().info(f"{msg}")
        if state == 0:
            dobot.stop_current_action()
        elif key == 'KEY_A': # mvoing joint 4 or self.r to the left
            # Handling 'A' Key
            
            self.get_logger().info(f"before {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
            self.get_logger().info(f"before {self.x,self.y,self.z,self.r}")
            temp = self.r
            temp2 = self.joint_4
            self.get_logger().info(f"going into isCartisian{isCartisian}")
            if isCartisian:
                self.get_logger().info(f"went into isCartisian{isCartisian}")
                self.get_logger().info(f"CHECK {inverse_kinematics(self.x,self.y,self.z,self.r-cartesianAmmount)}")

            
            
                self.get_logger().info(f"goal was valid")
                self.r = self.r - ammount
                
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4-ammount)):
                    self.joint_4 = self.joint_4 -  ammount
            # if temp == self.r and temp2 == self.joint_4:
            #     self.get_logger().info("Invalid goal")
            # else:
            #     valid = True
            #     self.get_logger().info("Valid goal")
                
        elif key == 'KEY_D': # moving joint 4 or self.r to the right
            # Handling 'D' Key
            temp = self.r
            temp2 = self.joint_4
            self.get_logger().info(f"{msg}")

            if(isCartisian):
                
                self.r = self.r +  cartesianAmmount
                if(self.r> RMAX):

                    self.r = RMAX
                
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4+ammount)):
                    self.joint_4 = self.joint_4 +  ammount
            # if temp == self.r and temp2 == self.joint_4:
            #     self.get_logger().info("Invalid goal")
            # else:
            #     valid = True
            #     self.get_logger().info("Valid goal")
        
        elif key == 'KEY_W': # moving joint 1 or self.z up
            # Handling 'W' Key
            temp = self.z
            temp2 = self.joint_3

            if(isCartisian):
                self.get_logger().info(f"self.z was {self.z} and max is {ZMAX}")
                self.z += cartesianAmmount
                if self.z > ZMAX:
                    self.z = ZMAX
            else:
                
                self.joint_3 += ammount

            # if temp == self.z and temp2 == self.joint_3:
            #     self.get_logger().info("Invalid goal")
            # else:
            #     valid = True
            #     self.get_logger().info("Valid goal")

   

        elif key == 'KEY_S': # moving joint 1 or self.z down
            # Handling 'S' Key
            temp = self.z
            temp2 = self.joint_3
            self.get_logger().info(f"before {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
            self.get_logger().info(f"before {self.x,self.y,self.z,self.r}")
            if(isCartisian):
                
                self.z = self.z-  cartesianAmmount
                if self.z < ZMIN:
                    self.z = ZMIN
            else:
                
                self.joint_3 -= ammount
            # if temp == self.z and temp2 == self.joint_3:
            #     self.get_logger().info("Invalid goal")
            # else:
            #     valid = True
            #     self.get_logger().info("Valid goal")
        
        elif key == 'KEY_UP':
                # Handling 'UP_KEY' Key
            temp = self.x
            temp2 = self.joint_2   
            if(isCartisian):
                self.get_logger().info(f"BEFORE {self.x,self.y,self.z,self.r}")
                self.get_logger().info(f"self.x was {self.x} and min is {XMIN}")
                self.x += cartesianAmmount
                if self.x >XMAX: 
                    self.x = XMAX
                self.get_logger().info(f"AFTER{self.x,self.y,self.z,self.r}")
            else:
                
                    self.joint_2 += ammount


        elif key == 'KEY_DOWN':
            temp = self.x
            temp2 = self.joint_2   
            if(isCartisian):
                self.get_logger().info(f"BEFORE {self.x,self.y,self.z,self.r}")
                self.get_logger().info(f"self.x was {self.x} and max is {XMAX}")
                self.x-= cartesianAmmount
                if self.x <  XMIN:
                    self.x = XMIN 
                self.get_logger().info(f"AFTER{self.x,self.y,self.z,self.r}")
            else:

                self.joint_2 -= ammount
    
        elif key == 'KEY_LEFT':
            if(isCartisian):
                self.get_logger().info(f"BEFORE {self.x,self.y,self.z,self.r}")
                self.get_logger().info(f"self.y was {self.y} and min is {YMIN}")
                
                self.y -= cartesianAmmount
                if(self.y < YMAX):
                    self.y = YMAX
                self.get_logger().info(f"AFTER{self.x,self.y,self.z,self.r}")
            else:
                
                    self.joint_1 -= ammount


        elif key == 'KEY_RIGHT':  
            if(isCartisian):
                # self.get_logger().info(f"before {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
                self.get_logger().info(f"BEFORE {self.x,self.y,self.z,self.r}")
                self.get_logger().info(f"self.y was {self.y} and max is {YMIN}")
                self.y += cartesianAmmount
                if self.y > YMIN:
                    self.y = YMIN
                self.get_logger().info(f"AFTER{self.x,self.y,self.z,self.r}")
            else:
                
                    self.joint_1 += ammount
        

        
        if(isCartisian):
            self.joint_1,self.joint_2,self.joint_3,self.joint_4 = inverse_kinematics(self.x,self.y,self.z,self.r)
        elif valid:
            self.x,self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        # self.get_logger().info(f"after {self.joint_1,self.joint_2,self.joint_3,self.joint_4}")
        # self.get_logger().info(f"after {self.x,self.y,self.z,self.r}")
      
        dobot.set_joint_ptp(self.joint_1,self.joint_2,self.joint_3,self.joint_4)

    

# The code below should be left as is
def main(args=None):
    rclpy.init(args=args)

    node = MyClassName()
    rclpy.spin(node)
    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()

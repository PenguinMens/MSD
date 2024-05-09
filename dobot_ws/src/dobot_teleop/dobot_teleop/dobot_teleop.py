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

class MyClassName(Node):

    def __init__(self):
        super().__init__('dobot_teleop')
        # Subscribers are created using interface type, topic name, callback function, and QoS setting
        # (the value of 10 can be left as is)
        self.subscription = self.create_subscription(
            TeleopAction,
            'dobot_teleop',
            self.listener_callback,
            10)
        self.x = 0.2
        self.y = 0.0
        self.z = 0.20
        self.r = 0.0

    
        self.joint_1 = 0
        self.joint_2 = 0
        self.joint_3 = 0
        self.joint_4 = 0

    # Listener callback function will be called every time a message is published on the topic this node is subscribed to
    def listener_callback(self, msg):
        dobot = DobotClient()
        # Logger displays formatted text in the console, useful for simple debugging
        ammount = 0.1
        cartesianAmmount = 0.001
        key = msg.key
        state = msg.state
        isCartisian = msg.cartisian
        valid = False
        if key == 'KEY_A': # mvoing joint 4 or self.r to the left
            # Handling 'A' Key
            temp = self.r
            temp2 = self.joint_4
            if isCartisian:
                if(dobot.is_goal_valid(inverse_kinematics(self.x,self.y,self.z,self.r-cartesianAmmount))):
                    self.r -= cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4-ammount)):
                    self.joint_4 -= ammount
            if temp == self.r and temp2 == self.joint_4:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")
                
        elif key == 'KEY_D': # moving joint 4 or self.r to the right
            # Handling 'D' Key
            temp = self.r
            temp2 = self.joint_4
            if(dobot.is_goal_valid(inverse_kinematics(self.x,self.y,self.z,self.r+cartesianAmmount))):
                    self.r += cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3,self.joint_4+ammount)):
                    self.joint_4 += ammount
            if temp == self.r and temp2 == self.joint_4:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")
            
        elif key == 'KEY_W': # moving joint 1 or self.x up
            # Handling 'W' Key
            temp = self.z
            temp2 = self.joint_3
            if(dobot.is_goal_valid(inverse_kinematics(self.x,self.y,self.z+cartesianAmmount,self.r))):
                self.z += cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3+ammount,self.joint_4)):
                    self.joint_3 += ammount

            if temp == self.z and temp2 == self.joint_3:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")

   

        elif key == 'KEY_S': # moving joint 1 or self.x down
            # Handling 'S' Key
            temp = self.z
            temp2 = self.joint_3
            if(dobot.is_goal_valid(inverse_kinematics(self.x,self.y,self.z-cartesianAmmount,self.r))):
                self.z -= cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2,self.joint_3-ammount,self.joint_4)):
                    self.joint_3 -= ammount
            if temp == self.z and temp2 == self.joint_3:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")
            
        elif key == 'UP_KEY':
                # Handling 'UP_KEY' Key
            temp = self.x
            temp2 = self.joint_2   
            if(dobot.is_goal_valid(inverse_kinematics(self.x+cartesianAmmount,self.y,self.z,self.r))):
                self.x += cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2+ammount,self.joint_3,self.joint_4)):
                    self.joint_2 += ammount
            if temp == self.x and temp2 == self.joint_2:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")

        elif key == 'DOWN_KEY':
            temp = self.x
            temp2 = self.joint_2   
            if(dobot.is_goal_valid(inverse_kinematics(self.x-cartesianAmmount,self.y,self.z,self.r))):
                self.x-= cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1,self.joint_2-ammount,self.joint_3,self.joint_4)):
                    self.joint_2 -= ammount
            if temp == self.x and temp2 == self.joint_2:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")

        elif key == 'LEFT_KEY':
            temp = self.y
            temp2 = self.joint_1  
            if(dobot.is_goal_valid(inverse_kinematics(self.x,self.y-cartesianAmmount,self.z,self.r))):
                self.y -= cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1-ammount,self.joint_2,self.joint_3,self.joint_4)):
                    self.joint_1 -= ammount
            if temp == self.y and temp2 == self.joint_1:
                self.get_logger().info("Invalid goal")
            else:
                valid = True
                self.get_logger().info("Valid goal")

        elif key == 'RIGHT_KEY':
            temp = self.y
            temp2 = self.joint_1  
            if(dobot.is_goal_valid(inverse_kinematics(self.x,self.y+cartesianAmmount,self.z,self.r))):
                self.y += cartesianAmmount
            else:
                if(dobot.is_goal_valid(self.joint_1+ammount,self.joint_2,self.joint_3,self.joint_4)):
                    self.joint_1 += ammount
            if temp == self.y and temp2 == self.joint_1:
                self.get_logger().info("Invalid goal")
        if(isCartisian) and valid:
            joint_1,joint_2,joint_3,joint_4 = inverse_kinematics(self.x,self.y,self.z,self.r)
        elif valid:
            self.x,self.y,self.z,self.r = forward_kinematics_solution(
                self.joint_1, self.joint_2, self.joint_3, self.joint_4)
        if valid:
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

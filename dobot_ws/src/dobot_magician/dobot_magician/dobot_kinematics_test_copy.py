import math
import numpy as np


def forward_kinematics_solution(th1, th2, th3, th4):
        r = th1 + th4
        th1 = np.deg2rad(th1)
        th2 = np.deg2rad(th2)
        th3 = np.deg2rad(th3)
        th4 = np.deg2rad(th4)

        x = 3*np.cos(th1) * (49*np.cos(th2 + th3) +45*np.sin(th2) + 20)
        y = 3*np.sin(th1) * (49*np.cos(th2 + th3) +45*np.sin(th2) + 20)
        z = 135*np.cos(th2) - 147*np.sin(th2 + th3) + 68

        
        return x/1000, y/1000, z/1000, r

def inverse_kinematics(self, x, y, z,r):
    # Calculate the inverse kinematics
    d = np.sqrt(x**2 + y**2) - self.L4
    h = z + self.L5 - self.L0 - self.L1
    c = np.sqrt(d**2 + h**2)
    alpha = math.atan2(d,h)
    numerator = (self.L2**2 - self.L3**2 + c**2)
    denominator = 2 * self.L2 * c
    division = numerator/denominator
    numeraor3 = (self.L2**2 + self.L3**2 - c**2)
    denominator3 = 2 * self.L2 * self.L3
    division3 = numeraor3/denominator3
    if(division > 1 or division < -1 or division3 > 1 or division3 < -1):
        print("The division is out of range")
        return 10,10,10,10
    theta1 = math.degrees(math.atan2(y,x))
    theta2 = math.degrees(alpha - math.acos(numerator/denominator))
    theta3 = math.degrees(math.asin(numeraor3/denominator3))
    theta4 = r - theta1

    return theta1, theta2, theta3, theta4    
 
# first = (0, 0, 0, 0)
# second = (-90, 10, 20, 30)
# third = (80, 35, -5, -10)        
# dobot_Kinematics = Dobot_Kinematics()
# first_solution = dobot_Kinematics.forward_kinematics_solution(*first)
# first_reverse = dobot_Kinematics.inverse_kinematics(*first_solution)
# print(f"First: {first}")
# print("First solution:", first_solution)
# print("First reverse:", first_reverse)



# second_solution = dobot_Kinematics.forward_kinematics_solution(*second)
# second_reverse = dobot_Kinematics.inverse_kinematics(*second_solution)
# print("Second: ", second)
# print("First solution:", first_solution)
# print("Second solution:", second_solution)

# third_solution = dobot_Kinematics.forward_kinematics_solution(*third)
# third_reverse = dobot_Kinematics.inverse_kinematics(*third_solution)
# print("Third: ", third)
# print("Third solution:", third_solution)
# print("Third reverse:", third_reverse)





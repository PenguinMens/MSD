import math
from typing import Tuple
import numpy as np
# from dobot_magician.OutOfBoundsException import OutOfBoundsException

def forward_kinematics_solution(th1, th2, th3, th4):
        """
        Calculate the forward kinematics for a given set of joint angles.

        Args:
            th1 (float): The first joint angle.
            th2 (float): The second joint angle.
            th3 (float): The third joint angle.
            th4 (float): The fourth joint angle.
        
        Returns:
            Tuple[float, float, float, float]: The calculated coordinates (x, y, z, r).
        
        
        """
        r = np.deg2rad(th1 + th4)
        th1 = np.deg2rad(th1)
        th2 = np.deg2rad(th2)
        th3 = np.deg2rad(th3)
        th4 = np.deg2rad(th4)

        x = 3*np.cos(th1) * (49*np.cos(th2 + th3) +45*np.sin(th2) + 20)
        y = 3*np.sin(th1) * (49*np.cos(th2 + th3) +45*np.sin(th2) + 20)
        z = 135*np.cos(th2) - 147*np.sin(th2 + th3) + 68

        
        return x/1000, y/1000, z/1000, r

def inverse_kinematics(x, y, z, r) -> Tuple[float, float, float, float]:
    """
    Calculate the inverse kinematics for a given set of coordinates.

    Args:
        x (float): The x-coordinate.
        y (float): The y-coordinate.
        z (float): The z-coordinate.
        r (float): The rotation angle.

    Returns:
        Tuple[float, float, float, float]: The calculated joint angles (theta1, theta2, theta3, theta4).

    Raises:
        OutOfBoundsException: If the division is out of range.

    """
    # Rest of the code...
    L0 = 0.056
    L1 = 0.082
    L2 = 0.135
    L3 = 0.147
    L4 = 0.060
    L5 = 0.070 
    # Calculate the inverse kinematics
    d = np.sqrt(x**2 + y**2) - L4
    h = z + L5 - L0 - L1
    c = np.sqrt(d**2 + h**2)
    alpha = math.atan2(d,h)
    numerator = (L2**2 - L3**2 + c**2)
    denominator = 2 * L2 * c
    division = numerator/denominator
    numeraor3 = (L2**2 + L3**2 - c**2)
    denominator3 = 2 * L2 * L3
    division3 = numeraor3/denominator3
    if(division > 1 or division < -1 or division3 > 1 or division3 < -1):
        #raise OutOfBoundsException
        print("The division is out of range")
        
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





from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'dobot_magician'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
    ('share/ament_index/resource_index/packages',
    ['resource/' + package_name]),
    ('share/' + package_name, ['package.xml']),
    (
    os.path.join("share", package_name, "launch"),
    glob(os.path.join("launch", "*launch.[pxy][yma]*")),
    ),
    ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='20210915@student.curtin.edu.au',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "dobot_homing = dobot_magician.dobot_homing:main",
            "dobot_ee = dobot_magician.dobot_ee:main",
            "dobot_state = dobot_magician.dobot_state:main",
            "dobot_ptp = dobot_magician.dobot_ptp:main"
        ],
    },

    
)

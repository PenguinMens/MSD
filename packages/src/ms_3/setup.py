from setuptools import find_packages, setup

package_name = 'ms_3'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gabriel',
    maintainer_email='gabrielaadl02@gmail.com',
    description='Package based of the milestone 3 document of MSD',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'milestone_3 = ms_3.milestone_3:main',
            'leader = ms_3.leader:main',
            'follower = ms_3.follower:main'
        ],
    },
)

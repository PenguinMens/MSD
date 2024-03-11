from setuptools import find_packages, setup

package_name = 'MS_3'

setup(
    name=package_name,
    version='0.0.1',
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
            "my_executable = MS_3.publisher_template:main",
        ],
    },
)

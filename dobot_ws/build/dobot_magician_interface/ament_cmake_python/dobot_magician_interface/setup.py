from setuptools import find_packages
from setuptools import setup

setup(
    name='dobot_magician_interface',
    version='0.0.1',
    packages=find_packages(
        include=('dobot_magician_interface', 'dobot_magician_interface.*')),
)

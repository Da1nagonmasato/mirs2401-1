from setuptools import find_packages
from setuptools import setup

setup(
    name='mirs_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('mirs_msgs', 'mirs_msgs.*')),
)

from setuptools import find_packages
from setuptools import setup

setup(
    name='mavros',
    version='2.10.1',
    packages=find_packages(
        include=('mavros', 'mavros.*')),
)

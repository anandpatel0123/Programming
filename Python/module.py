#Modules
#Modules refer to a file containing Python statements and definitions.

#A file containing Python code, for e.g.: abc.py, is called a module 
#and its module name would be "abc".

#How to import a module?

#import example #imported example module
#example.add(10, 20)

#Python has a lot of standard modules available.

#https://docs.python.org/3/py-modindex.html

import math
print(math.pi)

import datetime
datetime.datetime.now()

import math as m
print(m.pi)

#from...import statement

from datetime import datetime 
datetime.now()

#import all names

from math import *
print("Value of PI is " + str(pi))


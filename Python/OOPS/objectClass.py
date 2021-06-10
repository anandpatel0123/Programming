# Object class contains three methods :
#     __init__
#     __new__
#     __str__
# Every class inherits from an object class
class circle(object): #you can write like this also class circle:
    def __init__(self,radius):
        self.__radius = radius
    def __str__(self):
        return "This is a circle Class which takes radius as an argument"

c = circle(3)
print(c) #if we print object it will run the __str__ method
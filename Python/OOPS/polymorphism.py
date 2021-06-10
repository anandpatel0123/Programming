#Polymorphism----> Ability to take multiple forms

class vehicle:
    def __init__(self,color,maxSpeed):
        self.color = color
        self.__maxSpeed = maxSpeed
    def getMaxSpeed(self):
        return self.__maxSpeed
    def setMaxSpeed(self,maxSpeed):
        self.__maxSpeed = maxSpeed
    def printV(self):
        print("Color: ",self.color)
        print("MaxSpeed: ",self.__maxSpeed)

class car(vehicle):
    def __init__(self,color,maxSpeed,numGears,isConvertible):
        super().__init__(color,maxSpeed)
        self.numGears = numGears
        self.isConvertible = isConvertible
    def printV(self):
        # self.printV()
        print("NumGears :",self.numGears)
        print("IsConvertible :", self.isConvertible)
c = car("red",15,3,False)
c.printV()
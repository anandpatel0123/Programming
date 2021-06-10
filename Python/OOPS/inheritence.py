class vehicle:
    def __init__(self,color,maxSpeed):
        self.color = color
        self.__maxSpeed = maxSpeed
    def getMaxSpeed(self):
        return self.__maxSpeed
    def setMaxSpeed(self,maxSpeed):
        self.__maxSpeed = maxSpeed

class car(vehicle):
    def __init__(self,color,maxSpeed,numGears,isConvertible):
        super().__init__(color,maxSpeed)
        self.numGears = numGears
        self.isConvertible = isConvertible
    def printCar(self):
        print("Color :", self.color)
        print("MaxSpeed :",self.getMaxSpeed)
        print("NumGears :",self.numGears)
        print("IsConvertible :", self.isConvertible)
c = car("red",15,3,False)
c.printCar()
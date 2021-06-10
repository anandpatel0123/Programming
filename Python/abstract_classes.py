from abc import ABC,abstractmethod

class Automobile(ABC):
    
    def __init__(self):
        print("Automobile Careted")
    
    @abstractmethod
    def start(self):
        print("Start of Automobile called")

    @abstractmethod
    def stop(self):
        pass
    
    @abstractmethod
    def drive(self):
        pass
class car(Automobile):

    def __init__(self,name):
        print("Car Created")
        self.name = name
    def start(self):
        super().start()
        pass
    def stop(self):
        pass
    def drive(self):
        pass


c = car("Honda")
c.start()
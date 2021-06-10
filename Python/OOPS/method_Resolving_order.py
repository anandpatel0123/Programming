class Mother:
    def __init__(self):
        self.name = "Mena"
    def prinT(self):
        print("Print of Mother called")

class Father:
    def __init__(self):
        self.name = "Ajay"
        super().__init__()
    def prinT(self):
        print("Print of Father called")

class child(Father,Mother):
    def __init__(self, name):
        super().__init__()
    def prinT(self):
        print("Name Of Child :",self.name)

c = child("Rohan")
c.prinT()
print(child.mro()) #to see the order
    # Mother--                  --Father
    #        |                 |
    #        |                 |
    #        |----- CHILD -----|

class Mother:
    def prinT(self):
        print("Print of Mother called")

class Father:
    def prinT(self):
        print("Print of Father called")

class child(Father,Mother):
    def __init__(self, name):
        self.name = name
    def printchild(self):
        print("Name Of Child :",self.name)

c = child("Rohan")
c.prinT()
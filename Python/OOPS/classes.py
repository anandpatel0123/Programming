class Student: # create a class named student
    pass #we can create a empty class with pass keyword

s1 = Student() #create a new Student object
s2 = Student()
s1.name = 'Anand' #add attributes to the class individual and it is avilabe only for s1 object
s1.roll = '501'
s1.address = 'Jabalpur'
print(s1.name)
print(s1.__dict__) #check all the attributes of the object

print(hasattr(s1,'roll')) #check if the particular obj contains that attribute or not

print(getattr(s1,'address')) 
#gets the value of the attribute but if you dont have attribute 
# its going to throw an error

#but we can handle that error by passing the default value 
print(getattr(s1,'number','Not found'))

delattr(s1,'address') #it will delete the attribute


#init method
class Teacher:
    def __init__(self): #self is like this keyword
        self.name = 'Teacher'
        self.roll = '502'

s1 = Teacher() #by default address of obj is passed to init method
print(s1.__dict__)
s2 = Teacher()
print(s1.__dict__)

#we can pass the arguments to the init method
class Team:
    def __init__(self,name,roll):
        self.name = name
        self.roll = roll

s3 = Team("KKR",101)
print(s3.__dict__)

class Teacher:
    def __init__(self,name,roll):
        self.name = name
        self.roll = roll
    def printT(self): #we define our own function and by defalut obj is passed
        print(self.name)
        print(self.roll)
s3 = Teacher("Anand",407)
print(s3.__dict__)

s3.printT()
Teacher.printT(s3) #same as s3.printT()

class demo:
    @staticmethod #this will not allow funciton to be passed self obj
    def welcome(): #now this method became class method
        print("Hey Welcome!")
d1 = demo()
d1.welcome()
demo.welcome()

#access modifiers
class Test:
    def __init__(self,name,age):
        self.__name = name #__ is used to change the access modifier to private
        self.age = age
    def printTest(self):
        print(self.__name)
        print(self.age)

t1 = Test("Anand",20)
print(t1.__name) #now it will give error that __name is not present
t1.printTest()
print(t1.age) #but we can do this, bcoz age is not private

print(t1._Test__name) #name Manglins is used by developers only 

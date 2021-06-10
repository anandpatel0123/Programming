#Dictionary
#Dictionary is an Unordered collection of items. A dictonary has a key: value pair

#Dicionary Creation
my_dict = {}

#dict with integer key
my_dict = {1:'abc',2: 'xyz'}
print(my_dict)

#dict with mixed keys
my_dict = {'name': 'satish', 1: ['abc', 'xyz']}
print(my_dict)

#create empty dictionary using dict()
my_dict = dict()

#Dict Access
my_dict = {'name': 'satish','age':27,'address': 'guntur'}

#get value
print(my_dict['name'])

#if key is not present it gives keyError
print(my_dict['degree'])

#another way of accessing key
print(my_dict.get('address'))

#if key is not present it will give none using get() method
print(my_dict.get('degree'))

#Dict Add or Modify Elements
my_dict = {'name': 'satish', 'age':27, 'address': 'guntur'}


#update name
my_dict['name'] = 'raju'

print(my_dict)

#add new key
my_dict['degree'] = 'B.Tech'

print(my_dict)

#Dict Delete or Remove Element
#create a dictonary
my_dict = {'name': 'Satish', 'age': 27, 'address': 'guntur'}

#remove a particular item
print(my_dict.pop('age'))

print(my_dict)

my_dict = {'name': 'Satish', 'age': 27, 'address': 'guntur'}

#remove an arbitrary  key
my_dict.popitem()

print(my_dict)

squares = {2: 4, 3: 9, 4: 16, 5: 25}

#delelte particular key
del squares[2]

print(squares)

#remove all items
squares.clear()

print(squares)

squares = {2: 4, 3: 9, 4: 16, 5: 25}

#delete dictionary itself
del squares

print(squares) #NameError because dict is deleted

#keys method
print(squares.keys())

#copy the elements of dictionary to another
my_squares = squares.copy();
print(my_squares)

#formkeys[seq[, v]] -> Return a new dictionary with keys from seq
sunjects = {}.fromkeys(['math','english','hindi'],0)
print(sunjects)

subjects = {2:4, 3:9, 4:16, 5:25}
print(subjects.items()) #return a new view of the Dictonary items (keys, value)

subjects = {2:4, 3:9, 4:16, 5:25}
print(subjects.values()) #rturn a new view of the Dictonary values

d = {}
print(dir(d)) #Retunrs all the function related to the Dictonary

#Dict Comprehension
d = {'a':1, 'b':2, 'c':3}
for pair in d.items():
    print(pair)

#Creating a new dictionary with only pairs where the value is larger than 2
d = {'a':1, 'b':2, 'c':3, 'd':4}
new_dict = {k:v for k, v in d.items() if v>2}
print(new_dict)

#We can also perform operations on the key value pairs
d = {'a':1, 'b':2, 'c':3, 'd':4, 'e':5}
d = {k + 'c':v * 2 for k, v in d.items() if v > 2}
print(d)
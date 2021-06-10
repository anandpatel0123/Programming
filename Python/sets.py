#Sets
#A set is an unordered collection of items. Every elements is unique
#The set itself is a mutable. we can add or remove items from it.
#sets can be used to perform mathematical set operations like union, intersection, symmetric difference

#Set Creation
#sets are created using curly brackets {}
#set of Integers
s = {1,2,3}
print(s)
print(type(s))

#set doesn't allow duplicates. they store only one instance.
s = {1,2,3,1,4}
print(s)

#we can make set from a list
s = set([1,2,3,1])
print(s)

#empty set
s = set()

#Add element to a set
#we can add single element using add() method and
#add multiple elements using updat() method

s = {1,3}

#set object doesn't support indexing
print(s)

#add element
s.add(2)
print(s)

#add multiple elemetns
s.update([5,6,1])
print(s)

#add list and set
s.update([8,9],{10,2,3})
print(s)

#remove elements from a set
#discard() and remove() methods are used
s={1,2,5,4,3}
print(s)

s.discard(4)

print(s)

#remove an element
s.remove(2)
print(s)

#remove an element not present in a set 
s.remove(7) #will get keyerror

#discard an element not present in a set
s.discard(7) #will not get any error 
print(s)

#we can remove item using pop() method
s={1,2,3,4,5,6}
s.pop() #it removes random element
print(s)

#remove all the elements in set using clear() method
s = {1,5,6,4,7,8}
s.clear()
print(s)

#Set Operations
set1 = {1,2,3,4,5}
set2 = {3,4,5,6,7}

#union of 2 sets using | operator
print(set1 | set2)

#another way of getting union of 2 sets
print(set1.union(set2))

#Interesection of 2 sets using & operator
print(set1 & set2)

#using interaction function
print(set1.intersection(set2))

#set difference: set of elements that are only in set1 but not in set2
print(set1-set2)

#using difference function
print(set1.difference(set2))

#symmetric diff: set of elements in both set1 and set2, except those are common in both
#use ^ operator
print(set1 ^ set2)

#using symmetric_diffrence function
print(set1.symmetric_difference(set2))

#find issubset
x = {"a","b","c","d","e"}
y = {"c","d"}
print("set 'x' is a subset of 'y' ?",x.issubset(y)) #check x is a subset of y

#check y is a subset of x
print("set 'y' is a subset of 'x' ?",y.issubset(x))


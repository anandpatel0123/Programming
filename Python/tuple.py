#empty tuple
t = ()

#tuple having integers
t = (1,2,3)
print(t)

#tuple with mixed data types
t = (1, 'raju', 28, 'abc')
print(t)


#nested tuple
t = (1, (2,3,4), [1, 'raju', 28, 'abc'])
print(t)
print(t[1][2])

#slicing tuple
t = (1,2,3,4,5,6)
print(t[1:4])

#print element from starting to 2nd last elements
print(t[:-2])

#print element from starting to end
print(t[:])

#changing tuple
t = (1,2,3,4,[5,6,7])
t[2] = 'x'

t[4][1] = 'satish'
print(t)

#concatinating tuple
t = (1,2,3,4) + (5,6,7)
print(t)

#repeate the element in a tuple for a given number of times using *
t= (('satish',)*4)
print(t)

#Tuple Deletion
t=(1,2,3,4,5,6,7)
#deletes the whole tuple
del t

#tuple count
t=(1,2,3,4,1,5,1,6,7)
t.count(1)

#retunr index of the first element is equal to 3
t=(1,2,3,4,5,6)
print(t.index(3))
import numpy as np
import sys
import time

lst_arr = [i for i in range(0,100)]
np_arr = np.arange(100)

print(lst_arr)
print(np_arr)

## Size of one element in numpy array
print(np_arr.itemsize)

## size of 100 elements in numpy array
print(np_arr.itemsize * np_arr.size)

## size of one element in list
a = 10
print(sys.getsizeof(a))

## size of 100 element in list
print(sys.getsizeof(1) * len(lst_arr))

size = 100000

## add elements of array a and b
def addition_using_list():
    t1 = time.time()
    a = range(size)
    b = range(size)
    c = [a[i] + b[i] for i in range(size)]
    t2 = time.time()
    return (t2-t1)

def addition_using_numpy():
    t1 = time.time()
    a = np.arange(size)
    b = np.arange(size)
    c = a + b
    t2 = time.time()
    return (t2-t1)

t_list = addition_using_list()
t_numpy = addition_using_numpy()

print("List = ",t_list * 1000)
print("Numpy = ",t_numpy * 1000)

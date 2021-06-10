# how to create a list and insert an element into it
lst = ['one','two','four']
lst.insert(2,'three')
print(lst)

# how to remove an element from the list
lst = ['one','two','four']
lst.insert(2,'three')
lst.remove('two')
print(lst)

# how to append the list
lst = ['one','two','three','four']
lst2 = ['five','six']
lst.append(lst2)
print(lst)

# how to append the element to the list
lst = ['one','two','three','four']
lst2 = ['five','six']
lst.extend(lst2)
print(lst)

# how to delete an element from the list
lst = ['one', 'two', 'three', 'four', 'five', 'six']
del lst[1]
print(lst)
a = lst.pop(1)
print(a)

print(lst)

#List Keywords
lst = ['one', 'two', 'three', 'four', 'five', 'six']
if 'three' in lst:
    print('AI')
    
if 'seven' not in lst:
    print('ML')

#how to reverse the list
lst = ['one', 'two', 'three', 'four', 'five', 'six']
lst.reverse()
print(lst)

#sort the list in ascending order
numbers = [3,1,5,4,7,6,2,9,8]
sorted_lst = sorted(numbers)
print("Origianl list: ",numbers)
print("Sorted list: ",sorted_lst)


#sort the list in descending order
numbers = [3,1,5,4,7,6,2,9,8]
sorted_lst = sorted(numbers,reverse=True)
print("Origianl list: ",numbers)
print("Sorted list: ",sorted_lst)

#sort the list and stored in itself
lst = [3,1,5,4,7,6,2,9,8]
lst.sort()
print("Sorted List: ",lst)

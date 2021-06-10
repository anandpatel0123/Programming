# a = {1:2,3:4,"list":[1,23],"dict":{1:2}}
# print(a)

# print(a.get(1)) #if key not present it will print None
# print(a.get('li',0)) #if key not present it will print 0

# #to get all the keys
# print(a.keys())

# #to get all the items as tuples
# print(a.items())

# for i in a:
#     print(i,a[i])

# for i in a.values():
#      print(i)

# print('list' in a) #to check if key is present

# a['tuples'] = (1,2,3) #insert item into dict

# b = {3:5,'the':4,2:100}
# a.update(b) #to update the a

# a.pop('the') #remove the item and if key is not present it will give keyerror

# del a[1] #it will also remove the item
# a.clear() #it will clear all the items but the dict exists
# del a#to delete dictionary


#program to print keys of having freq = 2
s = 'this is a word string having many many word'
k = 2
words = s.split() #it will split with whitespace
d = {}
for i in words:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

# for w in words:
#     d[w] = d.get(w,0) + 1

for w in d:
    if d[w] == k:
        print(w)






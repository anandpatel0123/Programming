file_obj = open('h:/Data Structures/Data Science/Files/Sample.txt', 'r')
print(file_obj)
file_data = file_obj.read(100)
print(file_data)


file_data1 = file_obj.readline()
print(file_data1)

file_data2 = file_obj.readlines()
print(file_data2)

file_obj.close()

with open('h:/Data Structures/Data Science/Files/Sample.txt', 'r') as file_obj:
    file_data = file_obj.readlines()

print(file_data)
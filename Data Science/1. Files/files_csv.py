import csv

# with open('h:/Data Structures/Data Science/Files/year2017.csv', 'r') as file_obj:
#     file_data = file_obj.readlines()

# print(file_data[:5])

# with open('h:/Data Structures/Data Science/Files/year2017.csv', 'r') as file_obj:
#     file_data = csv.reader(file_obj)

# for row in file_data:
#     print(row) 

# with open('h:/Data Structures/Data Science/Files/sample.csv', 'r') as file_obj:
#     file_data = csv.reader(file_obj,delimiter='|')
#     for row in file_data:
#         print(row)

# with open('h:/Data Structures/Data Science/Files/sample.csv', 'r') as file_obj:
#     file_data = csv.reader(file_obj,delimiter='|',skipinitialspace=True)
#     file_list = list(file_data)
#     print(file_list)

# with open('h:/Data Structures/Data Science/Files/year2017.csv', 'r') as file_obj:
#     file_data = csv.reader(file_obj,skipinitialspace=True)
#     file_list = list(file_data)

# killed = []
# for row in file_list[1:]:
#     val = row[9]
#     if val != '':
#         killed.append(float(val))
# # print(killed)
# print(sum(killed))

# with open('h:/Data Structures/Data Science/Files/year2017.csv', 'r') as file_obj:
#     file_data = csv.DictReader(file_obj,skipinitialspace=True)
    
#     for row in file_data:
#         print(row['Weapon_type'])


with open('h:/Data Structures/Data Science/Files/year2017.csv', 'r') as file_obj:
    file_data = csv.DictReader(file_obj,skipinitialspace=True)

    file_list = list(file_data)

country_killed = {}
for row in file_list:
    key = row['Country']
    value = row['Killed']

    if value != '':
        value = int(float(value))
    else:
        value = 0
    
    if key in country_killed:
        country_killed[key] += value
    else:
        country_killed[key] = value
print(country_killed)
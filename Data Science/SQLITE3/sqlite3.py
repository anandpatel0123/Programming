import sqlite3

# conect the IMDB DB 
db = sqlite3.connect('IMDB.sqlite')
db

# if file doesn't exist it will create a file
db = sqlite3.connect('IMDB_1.sqlite')
db

db = sqlite3.connect('school.sqlite')

# with this cursor object we can interect with our database
cur = db.cursor()
cur

# Student table
# RNo, Name, Age

sql_query = 'create table Student(RollNumber int Primary key, Name Text, Age int)'
cur.execute(sql_query)

cur.execute('insert into student values(101, "Aman",20)')
# to make any transaction or changes in our sqlite db to make changes in our db
db.commit()
# we cannot give same rollNum, as it is primary key, it will give error
cur.execute('insert into student values(101, "Aman",20)')

cur.execute('insert into student values(102, "Aman",20)')
db.commit()
# after performing all operation we should close the db
db.close()

# to connect to db
db = sqlite3.connect('school.sqlite')
cur = db.cursor()
cur

# to insert value into our tables
cur.execute('insert into student values(103,"Mohit",24)')
db.commit()

# I want to insert these values into our db
rollNum = 104
Name = "Nikhil"
Age = 34
# if we want to inser values using variables we can use ? a placeholder
cur.execute('Insert into student values(?,?,?)',(rollNum, Name, Age))
db.commit()

# if we want to insert more than one row, we can use "executemany" method
values = [(105,"Nidhi",20),(106,"Manish",21),(107,"Anand",15)]
cur.executemany('Insert into student values(?,?,?)',values)
db.commit()

# update values
cur.execute('update student set age = 30')
db.commit()
cur.execute('update student set age = 20 where rollnumber = 103')
db.commit()

# update using variable
new_age = 50
# cur.execute('update student set age = ? where rollnumber = 105',new_age)
# new_age is not a tuple so we will get an error
# so we need to make new_age tuple
cur.execute('update student set age = ? where rollnumber = 105',(new_age,))
db.commit()

# how we can fetch the data from our db
cur.execute('select * from student')
# we can treat this cur as iterator
for row in cur:
    print(row)

# methods to fetch the data
# fetchone(), fetchmany(), fetchall()
cur.execute('select * from student')
print(cur.fetchone())
print(cur.fetchone())
print(cur.fetchone())

# fetchmany() we need to pass num or rows by default 1 rows
cur.execute('select * from student')
cur.fetchmany(3)

# fetchall() we need to pass num or rows by default 1 rows
cur.execute('select * from student')
ans = cur.fetchall()
ans

cur.execute('select * from student where rollnumber > 103')
cur.fetchall()

cur.execute('select * from student where Name like "A%"')
cur.fetchall()

# How to read data with pandas
# connect with our db first
import pandas as pd
db = sqlite3.connect('school.sqlite')

data = pd.read_sql_query("select * from student",db)
data
# many benefits using pandas,
# we don't need to create cursor object
# we don't need to call fetchone or fecthmany methods
# and by calling pd.read_sql_query() we are get result in the 
# form of data frame

# operation using pandas

data['Age'] == 30
data[data['Age'] == 30]

# create table using pandas
data = pd.DataFrame([[201,"Aman","English",20000],
                    [202,"Komal","Maths",22000],
                    [203,"Mahesh","Science",23000]],
                   columns = ["ID","Name","Course","Salary"])
data

#to insert into our database
data.to_sql("faculty",db)

data = pd.read_sql_query("select * from student",db)
data["Address"] = "Test"
data
data.to_sql("Student",db, if_exists = "replace")
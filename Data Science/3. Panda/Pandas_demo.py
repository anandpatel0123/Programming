import pandas as pd
import numpy as np


# Pandas
# Pandas is an open source library which provides high-performance, easy-to-use 
# data structures and data analysis tools for the Python programming language. 
# Pandas has a lot of functions that will help in reading and writing data and also 
# for data manipulation.

iris = pd.read_csv("h:/Data Structures/Data Science/Panda/iris.csv")
print(type(iris)) #<class 'pandas.core.frame.DataFrame'>


# Pandas Dataframes
# DataFrame is an object for data manipulation. You can think of it as a 2D tabular structure, 
# where every row is a dataset entry and columns represents features of data.


df  = iris.copy()

print(df.head(3)) #by default 5 lines

print(df.shape) #number off rows and columns
print(df.dtypes)

print(df.columns)

#change the coloumn names
df.columns = ['sl','sw','pl','pw','flower_type'] 

# print(df.shape)
# print(df.dtypes)

print(df.describe())

print(df.sl) #to see the particular column df.column_name
print(df.sw)
print(df["sw"])
print(df.isnull()) #it shows all the null entries

print(df.isnull().sum()) #it shows how many null entries are there

print(df.iloc[1:4, 2:5]) #rows and column
print(df.head())

print(df.iloc[0]) #display rows and columns by position
print(df.loc[7]) #this does by label


a = df.drop(0) #this creates a copy and removes the row and returns it
print(a.head())

df.drop(0,inplace = True) #this does in place
print(df.head())

df.drop(0,inplace = True) #0 is not the row,it shows that label of row
print(df.head())

print(df.index[0]) #we can drop the row by position or index
print(df.index[0],df.index[5])

df.drop(df.index[0], inplace = True) #it will delete one row
df.drop(df.index[[0,2]], inplace = True)#it will delete two rows
print(df.head())

print(df.sl > 5)  #it check the condition returns true and false
#it will return only those rows for which condition is true
print(df[df.sl > 5]) 

#it will return only for flower type Setosa
print(df[df.flower_type == 'Setosa'])

#it will describe that flower type
print(df[df.flower_type == 'Setosa'].describe())

#add a row
df.loc[0] = [1,2,3,4,"Setosa"] #it adds row at tail
print(df.tail())

#reset the index
print(df.index)
print(df.reset_index()) #it is returning new df, if want changes so, inplace = True
print(df.reset_index(drop = True))

#how to delte column
print(df.drop('sl', axis = 1)) #it will not change inplace
print(df.describe())

del df['sw']
print(df.describe())
print(df.head())

df = iris.copy()
df.columns = ['sl','sw','pl','pw','flower_type'] 
print(df.describe())


#how to add a column
#diff_pl_pw
df["diff_pl_pw"] = df["pl"] - df["pw"]
print(df.tail())

#handle n/a entries
#1) drop n/a
#2)fill n/a

df.iloc[2:4,1:3] = 0
print(df.head())

df.iloc[2:4,1:3] = np.nan
print(df.head())
print(df.describe())

#drop nan
print(df.dropna()) #it will not change inplace

print(df.head())
print(df.reset_index(drop=True,inplace=True))
print(df.head())

#fill the nan entries
df.iloc[2:4,1:3] = np.nan
print(df.head())

#filled the nan entries by mean of column
df.pl.fillna(df.pl.mean(), inplace = True)
df.pw.fillna(df.pw.mean(), inplace = True)
print(df.head())

#string based data
df = iris.copy()
df.columns = ['sl','sw','pl','pw','flower_type'] 
df["gender"] = "Female"
df.iloc[0:10,5] = "Male"
print(df.head())

def f(s):
    if s == "Male":
        return 0
    else:
        return 1

df["sex"] = df.gender.apply(f)

print(df.head())
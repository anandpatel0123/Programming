#FILE I/O

#File is a named location on disk to store related information. 
# It is used to permanently store data in a non-volatile memory (e.g. 
# hard disk).

#Since, random access memory (RAM) is volatile which loses its 
# data when computer is turned off, we use files for future use of the 
# data.

#When we want to read from or write to a file we need to open it first. 
# When we are done, it needs to be closed, so that resources that are 
# tied with the file are freed.

#File operation:

#Open a file

#Read or write (perform operation)

#Close the file

#Opening a File
#Python has a built-in function open() to open a file. 
# This function returns a file object, also called a handle, 
# as it is used to read or modify the file accordingly.

f = open('example.txt') #open file in current direcotry

#We can specify the mode while opening a file. In mode, 
# we specify whether we want to read 'r', write 'w' or append 'a' 
# to the file. We also specify if we want to open the file in text mode 
# or binary mode.

#Python File Modes

#'r' Open a file for reading. (default)

#'w' Open a file for writing. Creates a new file if it does not exist 
# or truncates the file if it exists.

#'x' Open a file for exclusive creation. If the file already exists, 
# the operation fails.

#'a' Open for appending at the end of the file without truncating it. 
# Creates a new file if it does not exist.

#'t' Open in text mode. (default)

#'b' Open in binary mode.

#'+' Open a file for updating (reading and writing)

f = open('example.txt') #equivalent to 'r' 
f = open('example.txt', 'r')

f = open('test.txt', 'w')

#Closing a File
#Closing a file will free up the resources that were tied with 
# the file and is done using the close() method.

#Python has a garbage collector to clean up unreferenced objects but, 
# we must not rely on it to close the file.

f = open('example.txt')
f.close()

#This method is not entirely safe. If an exception occurs when we are 
# performing some operation with the file, the code exits without 
# closing the file.

#A safer way is to use a try...finally block.
try:
   f = open("example.txt")
   # perform file operations
    
finally:
   f.close()

#Writing to a File
#In order to write into a file we need to open it in write 'w', 
# append 'a' or exclusive creation 'x' mode.

#We need to be careful with the 'w' mode as it will overwrite into 
# the file if it already exists. All previous data are erased.

#Writing a string or sequence of bytes (for binary files) is done 
# using write() method. This method returns the number of characters 
# written to the file.

f = open("test.txt", "w")
f.write("This is a First File\n")
f.write("Contains two lines\n")
f.close()


#This program will create a new file named 'test.txt' if it does not 
# exist. If it does exist, it is overwritten.

#Reading From a File

#There are various methods available for this purpose. We can use the 
# read(size) method to read in size number of data. If size parameter 
# is not specified, it reads and returns up to the end of the file.

f = open("test.txt", "r")
f.read()

#'This is a First File\nContains two lines\n'

f = open("test.txt", "r")
f.read(4)

#'This'

#f = open("test.txt","r")
f.read(10)

#' is a Firs'

#We can change our current file cursor (position) using the seek() 
# method.

#Similarly, the tell() method returns our current position (in number 
# of bytes).

f.tell()

f.seek(0) #bring the file cursor to initial position

print(f.read()) #read the entire file

#This is a First File
#Contains two lines

#We can read a file line-by-line using a for loop. This is both 
# efficient and fast.

f.seek(0)
for line in f:
    print(line)

#This is a First File

#Contains two lines

#Alternately, we can use readline() method to read individual lines of 
#a file. This method reads a file till the newline, including the 
#newline character.

f = open("test.txt", "r")
f.readline()

#'This is a First File\n'

f.readline()

#'Contains two lines\n'

f.readline()

#The readlines() method returns a list of remaining lines of the 
# entire file. All these reading method return empty values when end 
# of file (EOF) is reached.

f.seek(0)
f.readlines()

#['This is a First File\n', 'Contains two lines\n']

#Renaming And Deleting Files In Python.

#While you were using the read/write functions, you may also need to 
# rename/delete a file in Python. So, there comes a os module in Python
#  which brings the support of file rename/delete operations.

#So, to continue, first of all, you should import the os module in 
# your Python script.

import os

#Rename a file from test.txt to sample.txt
os.rename("test.txt", "sample.txt")

f = open("sample.txt", "r")
f.readline()


#'This is a First File\n'
#Delete a file sample.txt
os.remove("sample.txt")

f = open("sample.txt", "r")
f.readline()

#Python Directory and File Management

#If there are a large number of files to handle in your Python 
# program, you can arrange your code within different directories to 
# make things more manageable.

#A directory or folder is a collection of files and sub directories. 
# Python has the os module, which provides us with many useful methods 
# to work with directories (and files as well).

#Get current Directory

#We can get the present working directory using the getcwd() method.

#This method returns the current working directory in the form of a 
# string.

import os
os.getcwd()


#Changing Directory
#We can change the current working directory using the chdir() method.

#The new path that we want to change to must be supplied as a string 
# to this method. We can use both forward slash (/) or the backward 
# slash () to separate path elements.

os.chdir("/Users/anand/")
os.getcwd()

#List Directories and Files

#All files and sub directories inside a directory can be known using 
# the listdir() method.

os.listdir(os.getcwd())

#Making New Directory
#We can make a new directory using the mkdir() method.

#This method takes in the path of the new directory. If the full path 
# is not specified, the new directory is created in the current working 
# directory.

os.mkdir('test')
#However, note that rmdir() method can only remove empty directories.

#In order to remove a non-empty directory we can use the rmtree() 
# method inside the shutil module.

os.rmdir('test')

import shutil

os.mkdir('test')
os.chdir('./test')
f = open("testfile.txt",'w')
f.write("Hello World")
os.chdir("../")
os.rmdir('test')

# remove an non-empty directory
shutil.rmtree('test')

os.getcwd()

#Python Functions
#Function is a group of related statements that perform a specific task.

def function_name(parameters):

    """
    Doc String
    """

    Statement(s)

#keyword "def" marks the start of function header

#Parameters (arguments) through which we pass values to a function. These are optional

#A colon(:) to mark the end of funciton header

#Doc string describe what the function does. This is optional

#"return" statement to return a value from the function. This is optional

def print_name(name):
    """ 
    This function prints the name
    """
    print("Hello " + str(name)) 

print_name('satish')

#Doc String
#The first string after the function header is called the docstring and is short for documentation string.

print(print_name.__doc__) # print doc string of the function

def get_sum(lst):
    """
    This function returns the sum of all the elements in a list
    """
    #initialize sum
    _sum = 0
    
    #iterating over the list
    for num in lst:
        _sum += num
    return _sum

s = get_sum([1, 2, 3, 4])
print(s)

#print doc string
print(get_sum.__doc__)

global_var = "This is global variable"

def test_life_time():
    """
    This function test the life time of a variables
    """
    local_var = "This is local variable"
    print(local_var)       #print local variable local_var
    
    print(global_var)      #print global variable global_var
    

#calling function
test_life_time()

#print global variable global_var
print(global_var)

#print local variable local_var
print(local_var)

def computeHCF(a, b):
    """
    Computing HCF of two numbers
    """
    smaller = b if a > b else a  #consice way of writing if else statement
    
    hcf = 1
    for i in range(1, smaller+1):
        if (a % i == 0) and (b % i == 0):
            hcf = i
    return hcf

num1 = 6
num2 = 36

print("H.C.F of {0} and {1} is: {2}".format(num1, num2, computeHCF(num1, num2)))
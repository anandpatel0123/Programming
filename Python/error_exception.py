# a = "abc"
# a = (abc)) #invalid syntax error
# a = 10/0 #zero_division_error

# a = b*4 #name error b is not defined

#a ='1'+2 #type error

class ZeroDenominatorError(Exception): #Exception -> ZeroDivisionError
    pass

while True:
    try:
        n = input('Enter the Numerator : ') 
        #if we pass string in case of int we will get Value error
        num = int(n)
        n = input("Enter the Denominator : ")
        den = int(n)
        if den == 0:
            raise ZeroDenominatorError('Denominator Should not be Zero')
        value = num/den
        

    except ValueError: #if we not specified the error it will handle all errors
        print("Numerator and Denominator must be Integers")
    except ZeroDivisionError:
        print("Division by Zero is not allowed")
    except ZeroDenominatorError:
        print("Zero Denominator Error is Raised")
    except :
        print("Some Exception is Raised!")
    
    else: #else code will be executed when there is no error
        #the code which does not raise any error, will be here
        print(value) #these two lines is not going to raise any error
        break

    finally: #it will execute, if there is exception or not
        print(num)
        print(den)
        print("Exception may or may not be raised!")



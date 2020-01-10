import datetime
DOB = input("Enter your DOB: ")
CurrentYear = datetime.datetime.now().year
Age = CurrentYear-int(DOB) #This will change the string into an integer

if(Age>=18):
    print("Your age is {} and you are an adult".format(Age))
if(Age<=18):
    print("Your age is {} and you are a Kid".format(Age))
    #In Python, if statements are included in "Blocks" which is just where the code is going to be running
    #in that case, blocks run by spaces/indents

#If and Else Statements

num = input("Put in a number: ")
if (int(num) >= 0):
    print("This is a positive number")
else:
    print("This number is negative")

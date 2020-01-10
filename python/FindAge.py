import datetime
DOB = input("Enter your DOB: ")
CurrentYear = datetime.datetime.now().year
Age = CurrentYear-int(DOB) #This will change the string into an integer
print("Your age is {}".format(Age))

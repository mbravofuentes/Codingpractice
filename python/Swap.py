
int1 = int(input("Enter first number: "))
int2 = int(input("Enter second number: "))

print('Old value of int1 is {0} and int2 is {1}'.format(int1, int2))

int1 = int1 + int2
int2 = int1 - int2
int1 = int1 - int2

# Display the result
print('New value of int1 is {0} and int2 is {1}'.format(int1, int2))

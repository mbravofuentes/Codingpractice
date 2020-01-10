e = 10

def Display():
    global e
    print("Hello")
    print("Welcome to Python")

def Sum(n1,n2):
    global e
    z = n1 + n2
    print("Sum is {}".format(z))

def main():
    Display()
    Sum(20,1)
    Sum(30,20)
    Sum(10,10)

if __name__ == '__main__':main()

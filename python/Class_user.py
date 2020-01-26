class Mario:
    def __init__(self, username):
        self.UserName = username
        """self.Age = age
        self.Income = income
        self.Car = car """
    def GetUsername(self):
        return self.UserName


def main():
    obj1 = Mario("Mario Bravo")
    print("Your name is {}".format(obj1.GetUsername()))

if __name__ == '__main__':main()

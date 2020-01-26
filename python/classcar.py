class Car:
    def __init__(self, type, model, price, milesDrive, owner):
        self.Type = type
        self.Owner = owner
        self.Model = model
        self.Price = price
        self.MilesDrive = milesDrive
    def GetType(self):
        return self.Type
    def GetModel(self):
        return self.Model
    def GetPrice(self):
        return self.Price
    def GetMilesDrive(self):
        return self.MilesDrive
    def GetOwner(self):
        return self.Owner
    def GetCPrice(self):
        return self.Price- ( self.MilesDrive * 10)


def main():
    myCar = Car("Toyota", 2007, 9000, 100, "MarioB")
    CurrentPrice = myCar.GetCPrice()
    print("{}'s, car price before using it {}".format(myCar.GetOwner(), myCar.GetPrice()))
    print("{}'s, New car price {} dollars \n".format(myCar.GetOwner(),CurrentPrice))

    AlexCar = Car("Lexus", 2010, 8000, 120, "AlexC")
    CurrentPrice = AlexCar.GetCPrice()
    print("{}'s, car price before using it {}".format(AlexCar.GetOwner(), AlexCar.GetPrice()))
    print("{}'s, New car price {} dollars".format(AlexCar.GetOwner(),CurrentPrice))

if __name__ == '__main__':main()

def main():
    #write to file
    out = open("test.txt", "a") #a to append, w to write
    for i in range(5):
        inputToFile = input("Enter a string to write to file: ")
        out.write("\n{}".format(inputToFile))
    out.close()


if __name__ == '__main__':main()

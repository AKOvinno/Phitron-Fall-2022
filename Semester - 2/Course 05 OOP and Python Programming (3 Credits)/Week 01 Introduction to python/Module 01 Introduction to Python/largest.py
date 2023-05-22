num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))
num3 = int(input("Enter 3rd number: "))

if num1 > num2:
    if num1 > num3:
        print(num1, "is the largest number")
    else:
        print(num3, "is the largest number")
elif num2 > num3:
    print(num2, "is the largest number")
else:
    print(num3, "is the largest number")
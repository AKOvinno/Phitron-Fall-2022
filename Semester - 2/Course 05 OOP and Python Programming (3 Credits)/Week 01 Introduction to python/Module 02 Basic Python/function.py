def double_it(num):
    result = num * 2
    print(result)

double_it(8)
double_it(88)

def sum(num1, num2):
    result = num1 + num2
    return result

total = sum(44, 3)
print(total)

final = double_it(total)

print("Sum again:")
def sum(num1, num2, num3 = 0, num4 = 0):
    result = num1 + num2 + num3 + num4
    return result
#here we are passing 3 arguments but the function has 3 parameters so we initiate the others to 0
total = sum(99, 11, 5)
print("Total: ", total)

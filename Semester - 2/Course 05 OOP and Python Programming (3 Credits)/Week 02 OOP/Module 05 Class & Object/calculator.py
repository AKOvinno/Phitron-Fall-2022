#addition method
#deduct method
#multiply method
#divide method

class calculator:
    brand = 'Casio MS990'
    def add(self, num1, num2):
        return num1 + num2
    def sub(self, num1, num2):
        return num1 - num2
    def mul(self, num1, num2):
        return num1 * num2
    def div(self, num1, num2):
        return num1 / num2
    
my_calculator = calculator()
print(my_calculator.brand)

num1 = int(input('Enter first number: '))
num2 = int(input('Enter second number: '))
operator = input('Enter operation (+, -, *, /): ')

if operator == '+':
    print('Addition: ', my_calculator.add(num1, num2))
elif operator == '-':
    print('Subtraction: ', my_calculator.sub(num1, num2))
elif operator == '*':
    print('Multiplication: ', my_calculator.mul(num1, num2))
elif operator == '/':
    print('Division: ', my_calculator.div(num1, num2))
else:
    print("Invalid Operator!")

















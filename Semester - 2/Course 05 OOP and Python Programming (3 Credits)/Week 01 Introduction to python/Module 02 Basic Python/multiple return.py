def a_lot(num1, num2):
    sum = num1 + num2
    mul = num1 * num2
    div = num1 / num2
    rem = num1 % num2
    sub = num1 - num2
    #return sum, mul, div, rem, sub
    return [sum, mul, div, rem, sub]
    
print(a_lot(55, 21))
# The *numbers parameter collects all the passed arguments into a tuple named numbers. The loop then iterates over the tuple and prints each argument.

def all_sum(num1, num2, *numbers): 
    print(numbers)
    sum = 0
    for num in numbers:
        print(num)
        sum = sum + num 
    return sum

total = all_sum(45, 46, 57, 98, 100) 
print("All sum: ", total)

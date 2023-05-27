numbers = [12, 45, 98, 68]

print("After append: ")
numbers.append(56) # add at the end
print(numbers)

print("After Insert at given index: ")
numbers.insert(2, 71) # inserting numbers at given (index, num)
print(numbers)

print("After removing a number: ")
numbers.remove(98)
print(numbers)

print("Checking if the number is in the list...")
if 8 in numbers:
    numbers.remove(8)
else:
    print("No 8 is not in the list.")

print("After popping: ")
last = numbers.pop()
print("Last: ", last, "Numbers: ", numbers)

print("Getting index: ")
if 68 in numbers:
    index = numbers.index(68)
    print(index)

print("After sorting: ")
numbers.sort()
print(numbers)

print("After Reversing: ")
numbers.reverse()
print(numbers)
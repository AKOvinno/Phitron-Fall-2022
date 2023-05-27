#list, array, collection is same (simple terms

#index =    0   1   2   3   4   5   6   7   8   9
numbers = [45, 56, 12, 89, 87, 32, 84, 59, 46, 93]
#index =  -10  -9  -8  -7  -6  -5  -4  -3  -2  -1

for i in range(-1, -11, -1):
    print(i, ": ", numbers[i])

# list( start : before end)
print(numbers[2:6])
print(numbers[1:7])

# list(start : before end : step)
print(numbers[1:7:2])
# list(start : before end : reverse step)
print(numbers[7:2:-1])
# print everything starting 4
print(numbers[4:])
# print everything before 5
print(numbers[:5])
# print everything on list
print(numbers[:])
# print everything in reverse order
print(numbers[: : -1])

# set is a collection of unique things and with second bracket and also it doesn't maintain sequence
#It's also mutable 

numbers = [12, 56, 98, 78, 56, 12, 6, 98]
print(numbers)
numbers_set = set(numbers)
print(numbers_set)
numbers_set.add(55)
print(numbers_set)
numbers_set.remove(6)
print(numbers_set)

#print(numbers_set[2]) not possible
#numbers_set[1] = 5 not possible

for item in numbers_set:
    print(item)

if 9 in numbers_set:
    print("9 exists")
elif 98 in numbers_set:
    print("98 exists")
else:
    print("9 doesn't exists")

A = {1, 3, 5, 7}
B = {1, 2, 3, 4, 5}
print(A & B)
print(A | B)
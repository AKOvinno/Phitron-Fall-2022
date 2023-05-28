#string is immutable we can't change it
name = "Sakib\'s Khan" #escape \ 
name2 = 'Sakib Khan'
name3 = """
    Sakib khan
    number one
"""

print(name)
print(name2)
print(name3)

#list is mutable and mutable means changeable 

# string is sequence of characters
for char in name2:
    print(char)

print("Random printing: ")
print(name2[3])
print(name2[1:6])
print(name2[-3])
print(name2[: : -1])

# name2[0] = "R" can't be done
print(name2)
if "khan" in name2:
    print("Exists")

print(name2.upper())
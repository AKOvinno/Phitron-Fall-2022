# tuple is immutable and it's with first bracket
def multiple():
    return 3, 4

print(multiple())

things = "pen", "tripod", "water bottle", "Charger", "phone", "Web Cam", "Sun glass"

print("Random Checking: ")
print(things)
print(type(things))
print(things[0])
print(things[-2])
print(things [3 : 6])

if "phone" in things:
    print("exists")

for item in things:
    print(item)

#things[0] = "wagon" // it's not possible
print(things)
print(len(things))

mega = ([2, 3, 4], [6, 8, 9, 5])
# mega[0] = [1, 6] it's not possible
print(mega)
mega[0][1] = 666 # here it's possible because inside tuple it's a list
print(mega)

numbers = [12, 56, 98, 78, 56, 12, 26, 98]

#lambda
doubled = lambda num : num * 2

#map
#doubled_nums = map(doubled, numbers)

#lambda
doubled_nums = map(lambda x: x*2, numbers)
squared_nums = map(lambda x: x*x, numbers)

print(doubled_nums) #here the map will return the object
print(list(doubled_nums)) # here making list to see the output
print(list(squared_nums))


actors = [
    {"name": "sabana", "age": 65 },
    {"name": "sabnoor", "age": 45 },
    {"name": "sabila noor", "age": 30 },
    {"name": "srabonti", "age": 38 },
    {"name": "shaon", "age": 47 },
]
juniors = filter(lambda actor : actor["age"] < 40, actors)
print(list(juniors))
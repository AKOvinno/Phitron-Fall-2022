numbers = [12, 56, 98, 78, 56, 12, 26, 98]
person1 = ["Kala chan", "Kalipur", 23, "Student"]

# key value pair
# dictionary
# object
# hash table
# overlap with set
# can't add anything in the middle
# {key: value, key: value, key: value}

person = {"Name": "Kala Pakhi", "Address": "Kaliapur", "Age": 23, "Job": "Unemployed"}
print(person)
print(person["Job"])
# It will print all keys or values
print(person.keys())
print(person.values())

#adding new key
person["Language"] = "Python"
#changing value of any key
person["Name"] = "Sada Pakhi"
#deleting any key
del person["Age"]
print(person)

#loops
for k, v in person.items():
    print(k,":", v)
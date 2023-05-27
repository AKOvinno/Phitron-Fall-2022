#The **kwargs parameter collects all the passed keyword arguments into a dictionary named kwargs. The loop then iterates over the dictionary and prints each key-value pair.

# def famous(**kargs)
def famous_name(first, last, **addition):
    name = f"{last} {first}"
    #print(addition['title']) output will be hujur
    for key, value in addition.items():
        print(key, value)
    return name
name = famous_name(first = "Taher", last = "Ali", title = "hujur", addition = "Sheikh")
print("Famous Name:", name)

print("Another Example: ")
def display_person(**kwargs):
    for key,value in kwargs.items():
        print(f"{key}: {value}")


display_person(Name="Amir Khan", Age="45")

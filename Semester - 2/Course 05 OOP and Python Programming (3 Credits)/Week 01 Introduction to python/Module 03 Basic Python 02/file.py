# with open("message.txt", "w") as file:
#     file.write("I Love you, Python!")

with open("message.txt", "a") as file:
    file.write("I Hate you, Python!")

with open("message.txt", "r") as file:
    text = file.read()
    print(text)
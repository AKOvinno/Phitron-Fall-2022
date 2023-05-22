# for (int i = 0; i < 5; i++)

number = [5, 10, 15, 20, 25]
sum = 0
for num in number:
    print(num)
    sum = sum + num
    if num >= 20:
        print("Bigger Values")

print("Sum: ", sum)

# text = "pagla hawa"
# for char in text:
#     print(char)

for i in range(1, 10):
    print(i)

print("Printing using increment")
for i in range(1, 10, 2):
    print(i)

i = 0
friends = ["Nobel", "Ashik", "Rabbi", "Naz", "Hasan", "Kayes"]
for friend in friends:
    print(i+1, friends[i])
    i += 1



# in, not, not in, is, is not 

a = 7
Boss = False
coin = "Head"
if a > 5:
    print("greater than 5")
    print("I don't know how much greater")
elif a > 3:
    print("little greater than 5")
else:
    print("less than 5")

if Boss is True:
    print("I am doing it now")
else:
    print("Come back after lunch")


# nested condition

if Boss is not True:
    print("Boss you are joss")
    if coin == "tail":
        print("Batting")
    else:
        print("Bowling")
else:
    print("You are loss not a boss")
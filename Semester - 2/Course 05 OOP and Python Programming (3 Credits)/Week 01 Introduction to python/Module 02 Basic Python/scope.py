balance = 3000

def buy_things(item, price):
    #local scope variable
    #you can access global variable without using the global keyword
    dream_phone = "x phone"
    #if you want to modify a global variable, you have to use the global keyword
    global balance
    print(f"previous balance: ", balance)
    balance = balance - price
    print(f"Balance after buying {item} ", balance)
    print(dream_phone)

buy_things("Sunglass", 1000)
#print(dream_phone)

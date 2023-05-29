class Phone:
    manufactured = 'China'

    def __init__(self, owner, brand, price):
        #pass # it will do nothing it will only pass
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self, phone, sms):
        text = f'sending to: {phone} {sms}'
        print(text)
    
    def print(self, owner, brand, price):
        print("Owner's Name: ", owner)
        print("Brand Name: ", brand)
        print("Phone price: ", price)
        

my_phone = Phone('Black Moon', 'Oppo', 9800)
print(my_phone.owner, my_phone.brand, my_phone.price)

her_phone = Phone('She', 'iphone', 120000)
her_phone.print('She', 'Iphone', 120000)
    
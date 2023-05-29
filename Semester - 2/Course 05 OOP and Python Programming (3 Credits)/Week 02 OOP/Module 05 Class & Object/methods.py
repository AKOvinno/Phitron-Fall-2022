def call():
    print("Calling someone i don't know")
    return "call done"

class Phone:
    price = 12000
    color = "blue"
    brand = "samsung"
    features = ["camera", "speaker", "hammer"]

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'sending SMS to: {phone} and message: {sms}'
        return text

my_phone = Phone()
print(my_phone.features)
my_phone.call()
result = my_phone.send_sms(+8801791708659, 'Laila, I am missing you')
print(result)

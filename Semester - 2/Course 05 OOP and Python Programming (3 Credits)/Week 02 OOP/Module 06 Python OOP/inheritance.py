# base class, parent class, common attribute + functionality class
# derived class, child class, uncommon attribute + functionality class

class Gadget:
    def __init__(self, brand, price, color, origin):
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        return f'running laptop: {self.brand}'

class Laptop:
    def __init__(self, memory, ssd):
        self.memory = memory
        self.ssd = ssd
    
    def coding(self):
        return f'learning python and practicing'
    
class Phone(Gadget): #we need gadget here for connecting it
    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin) # we also need it for connecting

    def phone_call(self, number, text):
            return f'Sending SMS to: {number} with: {text}'
    
    def __repr__(self):
         return f'phone: {self.brand}, Price: {self.price}, Dual Sim: {self.dual_sim}'
    
class Camera:
    def __init__(self, pixel):
          self.pixel = pixel
    
    def change_lens(self):
         pass
    

# inheritance
my_phone = Phone('iphone', 120000, 'silver', 'china', True)
#print(my_phone.phone_call(1930339902, "hello"))
print(my_phone.brand)
print(my_phone)
#static attribute (class attribute)
#static method @staticmethod
#class method @classmethod
#differences between static method and class method
class Shopping:
    cart = [] # class attribute # static attribute
    origin = 'china'

    def __init__(self, name, location) -> None:
        self.name = name #'Jamuna' # instance attribute
        self.location = location#'inside traffic jam'

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    @staticmethod
    def multiply(a, b): # don't need self bcoz @staticmethod
        #print(self.name) it's not possible
        print(a * b)
    
    @classmethod
    def hudai_dekhi(self, item):
        print('hudai dekhi kintu kinmu na, just dekhbo', item)

Bashundhara = Shopping('Bashundhara', 'Dhaka')
Bashundhara.purchase('lungi', 500, 1000)
#if we try to access from class it wants the self attribute
#Shopping.purchase('Oil', 130, 1000, 500)

Bashundhara.hudai_dekhi('lungi')
Shopping.hudai_dekhi('lungi') # we can now access bcoz @classmethod

Shopping.multiply(4, 6) #static method
Bashundhara.multiply(6, 9)
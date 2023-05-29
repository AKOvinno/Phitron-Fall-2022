class Pen:
    manufactured = 'Bangladesh'

    #constructor
    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def print(self, owner, brand, price):
        print("Owner's Name: ", owner)
        print("Brand Name: ", brand)
        print("Phone price: ", price)
        

matador_pen = Pen('Matador', 'Pran', 5)
all_time = Pen('Square', 'All-Time', 6)
jel_pen = Pen('Jamuna', 'Jell-Pen', 10)

matador_pen.print('Matador', 'Pran', 5)
all_time.print('Square', 'All-Time', 6)
jel_pen.print('Jamuna', 'Jell-Pen', 10)



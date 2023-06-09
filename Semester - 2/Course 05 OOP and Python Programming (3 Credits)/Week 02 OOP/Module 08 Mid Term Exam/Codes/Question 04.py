class Vehicle:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price
class Bus(Vehicle):
    def __init__(self, name, price, seat) -> None:
        self.seat = seat
        super().__init__(name, price)
class ACBus(Bus):
    def __init__(self, name, price, seat, temperature) -> None:
        self.temperature = temperature
        super().__init__(name, price, seat)

# Here 'ACBus' derived from 'Bus' class and 'Bus' class derived from 'Vehicle' class
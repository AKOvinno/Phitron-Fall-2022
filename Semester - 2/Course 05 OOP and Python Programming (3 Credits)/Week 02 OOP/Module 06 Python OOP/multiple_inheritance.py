class Family:
    def __init__(self, address) -> None:
        self.address = address

class School:
    def __init__(self, id, level) -> None:
        self.id = id
        self.level = level

class Sport: 
    def __init__(self, game) -> None:
        self.game = game

class Student(Family, School, Sport):
    def __init__(self, address, id, level, game) -> None:
        School.__init__(self, id, level)
        Sport.__init__(self, game)
        Family.__init__(self, address)
        super().__init__(address)

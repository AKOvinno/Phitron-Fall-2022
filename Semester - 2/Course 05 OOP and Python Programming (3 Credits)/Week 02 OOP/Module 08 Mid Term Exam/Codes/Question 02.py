class Animal: # Here 'Animal' Class Serve as a superclass
    def __init__(self, name) -> None:
        self.name = name

    def make_sound(self):
        print('Animal making some sound')

class Cat(Animal): # Subclass inherit from 'Animal'
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('meow meow')

class Dog(Animal): # Subclass inherit from 'Animal'
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('Bark Bark')

class Goat(Animal): # Subclass inherit from 'Animal'
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('beh beh beh')

# Here each subclass overrides the make_sound() method with its own implementation.

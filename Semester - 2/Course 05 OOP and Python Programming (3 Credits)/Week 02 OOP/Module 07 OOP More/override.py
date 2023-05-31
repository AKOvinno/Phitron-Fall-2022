class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
    def eat(self):
        print('rice, meat')
    def exercise(self):
        raise NotImplementedError

class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)
    #override
    def eat(self):
        print('vegetables')
    def exercise(self):
        print('exercise in gym')
    # + sign operator overload
    def __add__(self, other):
        return self.age + other.age, self.name + other.name
    # * sign operator overload
    def __mul__(self, other):
        return self.weight * other.weight
    # len overload
    def __len__(self):
        return self.height
    # > operator overload
    def __gt__(self, other):
        return self.age > other.age

sakib = Cricketer('sakib', 38, 68, 91, 'BD')
mushi = Cricketer('mushi', 36, 65, 78, 'BD')
sakib.eat()
sakib.eat()
sakib.exercise()

#plus sign overload
print(45 + 63)
print('Sakib' + 'Rakib')
print([12, 98] + [5, 6, 7, 1, 2])
print(sakib + mushi)
print(sakib * mushi)
print(len(sakib))
print(sakib > mushi)
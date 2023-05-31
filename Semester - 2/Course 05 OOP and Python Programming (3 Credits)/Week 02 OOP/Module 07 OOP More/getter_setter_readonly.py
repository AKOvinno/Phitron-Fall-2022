# read only --> you can not set the value. value can't be changed
# getter --> get a value of a property. Most of the time, you will get the value of private attribute
#setter --> set a value of a property through a method. Most of the time, you will set the value of a private property.
class User:
    def __init__(self, name, age, money) -> None:
        self._name = name
        self._age = age
        self.__money = money
    #getter without any setter is read only attribute
    @property #decorator
    def age(self):
        return self._age
    
    #getter
    @property
    def salary(self):
        return self.__money
    #setter 
    @salary.setter
    def salary(self, value):
        if value < 0:
            return 'Salary can not be negative'
        self.__money += value

samsu = User('Kopa', 21, 12000)

#print(samsu.__money)
#print(samsu.age()) it wont' work because it's a attribute now
print(samsu.age) # now it will work
print(samsu.salary)
samsu.salary = 4500
print(samsu.salary)
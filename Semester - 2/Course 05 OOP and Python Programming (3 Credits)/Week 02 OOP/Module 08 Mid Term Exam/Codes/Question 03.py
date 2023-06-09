class MyMath:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def sum(self):
        return self.a + self.b + self.c

    def factorial(self):
        fact = 1
        for num in range(1, self.b + 1):
            fact *= num
        return fact

my_solution = MyMath(2, 3, 4)
print(my_solution.sum()) 
print(my_solution.factorial())  

# encapsulation ---> hide details
# access modifier: public, protected, private

class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name #public
        self._branch = 'Banani 11' #protected
        self.__balance = initial_deposit #private

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount < self.balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Not enough balance'
John = Bank('Younger Bro', 10000)

print(John.holder_name)
John.holder_name = 'Elder Bro'
John.deposit(40000)
print(John.get_balance())
print(John.holder_name)
print(John._branch)
#accessing forcefully
#print(dir(John))
print(John._Bank__balance)
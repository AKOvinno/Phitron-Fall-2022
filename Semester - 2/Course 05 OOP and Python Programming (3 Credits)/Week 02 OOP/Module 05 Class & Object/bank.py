class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000

    def get_balance(self):
        return self.balance
    
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f'Sorry! You can not withdraw below {self.min_withdraw}')
        elif amount > self.max_withdraw:
            print(f'Sorry! you can not withdraw more then {self.max_withdraw}')
        elif amount > brac.get_balance():
            print('Sorry! You do not have enough money. The balance is: ', brac.get_balance())
        else:
            self.balance -= amount
            print(f'Here is your money {amount}')
            print(f'Your balance after withdraw: {self.get_balance()}')
        
brac = Bank(15000)
brac.withdraw(25)
brac.deposit(25000)
print('Balance: ', brac.get_balance())
brac.withdraw(70000)
brac.withdraw(30000)

dbbl = Bank(5000)
dbbl.deposit(2000)
dbbl.deposit(2000)
print('DBBL Balance: ', dbbl.get_balance())

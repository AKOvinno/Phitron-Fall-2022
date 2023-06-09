class User:
    bank_balance = 0
    total_loan_amount = 0
    def __init__(self, name, acc_num, initial_balance=0):
        self.name = name
        self.acc_num = acc_num
        self.balance = initial_balance
        self.transaction_history = []
        User.bank_balance += initial_balance

    def create_account(self):
        print(f'User Name: {self.name} Account Number: {self.acc_num}')

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            User.bank_balance += amount
            self.transaction_history.append(f'Deposited: {amount}TK')
            User.bank_balance += amount
            print(f'Deposited Taka: {amount}. New balance: {self.balance}TK')
        else:
            print('Invalid amount. Deposit failed. Plz try again....')

    def withdraw(self, amount):
        if amount > User.bank_balance:
            print('Bank is bankrupt!!!')
        elif amount <= self.balance:
            self.balance -= amount
            self.transaction_history.append(f'Withdrew: {amount}TK')
            User.bank_balance -= amount
            print(f'Successfully withdrawn Taka: {amount}. New balance: {self.balance}TK')
        else:
            print('Insufficient balance. Withdrawal failed. Plz try again....')

    def check_balance(self):
        print(f'User Name: {self.name} Balance: {self.balance}TK')

    def transfer(self, amount, recipient):
        if amount <= self.balance:
            self.balance -= amount
            recipient.balance += amount
            self.transaction_history.append(f'Transferred: {amount}TK to {recipient.name}')
            recipient.transaction_history.append(f'Received: {amount}TK from {self.name}')
            print(f'Successfully transferred Taka: {amount} to {recipient.name}. New balance: {self.balance}TK')
        else:
            print('Insufficient balance!!! Transfer failed! Plz try again....')

    def show_transaction_history(self):
        print(f'Transaction history for {self.name}:')
        for transaction in self.transaction_history:
            print(transaction)

    def take_loan(self, loan_amount):
        if self.balance * 2 <= loan_amount:
            self.balance += loan_amount
            self.transaction_history.append(f'Took a loan Taka: {loan_amount}')
            User.total_loan_amount += loan_amount
            print(f'Loan approved! Name: {self.name} Loan Amount Taka:{loan_amount}. New balance: {self.balance}TK')
            User.bank_balance -= loan_amount
        else:
            print('Sorry! you are not eligible for taking loan')

class Admin:
    loan_feature = True

    def __init__(self, name, EmployeeId):
        self.name = name
        self.EmployeeId = EmployeeId

    def create_account(self):
        print(f'Administrator Name: {self.name}, Employee ID: {self.EmployeeId}')

    def check_bank_balance(self):
        print(f'Total available balance of the bank Taka: {User.bank_balance}')

    def check_loan_amount(self):
        print(f'Total loan amount Taka: {User.total_loan_amount}')

    def toggle_loan_feature(self):
        Admin.loan_feature = not Admin.loan_feature
        if Admin.loan_feature:
            print('Loan feature is ON.')
        else:
            print('Loan feature is OFF.')

# User's Functionalities

#Creating Account
user1 = User('Rahim', '100201', 10000)
user1.create_account()
user2 = User('Karim', '100201', 20000)
user2.create_account()
user3 = User('Jashim', '100203', 30000)
user3.create_account()
#deposit
user1.deposit(2000)
#withdraw
user1.withdraw(7000)
#check balance
user1.check_balance
user2.check_balance
user3.check_balance
#transfer money from user3 to user1
user3.transfer(10000, user1)
#transfer money from user2 to user3
user2.transfer(5000, user3)
#transaction history
user1.show_transaction_history()
user2.show_transaction_history()
user3.show_transaction_history()
#taking loan twice of user3's total amount
user3.take_loan(50000)
#unable to withdraw deposited money because bank is bankrupt
user1.withdraw(10000)

#Admin's functionalities

#Creating Account
admin1 = Admin('Mr. Khan', 101)
admin1.create_account()
admin2 = Admin('Mr. Chowdhury', 102)
admin2.create_account()
#Checking loan amount
admin1.check_loan_amount()
#Checking Bank balance
admin1.check_bank_balance()
#On or Off the loan feature
admin1.toggle_loan_feature()







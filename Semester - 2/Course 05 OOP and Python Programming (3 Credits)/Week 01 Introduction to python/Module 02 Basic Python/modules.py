from args import *  # If i want to import all the functions from it
from function import double_it
from kargs import famous_name as name

f_name = name("Ashfaq Kadir", "Ovinno")
print(f_name)
result = double_it(45)
print(result)

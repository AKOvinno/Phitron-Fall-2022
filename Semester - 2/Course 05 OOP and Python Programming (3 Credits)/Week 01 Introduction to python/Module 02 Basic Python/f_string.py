# PEP 498 introduces a new kind of string literals: f-strings, or formatted string literals.

# Formatted string literals are prefixed with 'f' and are similar to the format strings accepted by str.format(). They contain replacement fields surrounded by curly braces. The replacement fields are expressions, which are evaluated at run time, and then formatted using the format() protocol:

# Prints today's date with help
# of datetime library
import datetime

today = datetime.datetime.today()
print(f"{today:%B %d, %Y}")


# Python3 program introducing f-string
val = 'Geeks'
print(f"{val}for{val} is a portal for {val}.")
 
 
name = 'Tushar'
age = 23
print(f"Hello, My name is {name} and I'm {age} years old.")
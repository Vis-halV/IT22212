"""QUESTION:
Implementation of Classes, Modules and Packages using python
AIM: To Implementation of Classes, Modules and Packages using python
ALGORITHM:
Step 1. Start the program and import necessary modules. Create
a number class with an initializer that takes two parameters.
Step 2. Prompt the user to enter two values, a and b, and convert these
inputs to integers.
Step 3. Create an instance of the number class, passing a and b as
arguments.
Step 4. Print a string indicating the sum of a and b, and use
the add function from the calc module to calculate this sum.
Step 5. Format the sum into the printed string.
Step 6. Print a string indicating the ASCII form of a and b, and use
the stingf function from the sting module to calculate this form.
Step 7. Format the ASCII form into the printed string and end the program."""




import cal.calc
import cal.sting
class number:
def init (self,a,b):
self.a=a
self.b=b
a=int(input('Enter the value of a: '))
b=int(input('Enter the value of b: '))
num1=number(a,b)
print('The Sum Of A and B is:{}'.format(cal.calc.add(num1.a,num1.b)))
print('The ISCII form of A and B is:{}'.format(cal.sting.stingf(num1)))
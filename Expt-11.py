"""QUESTION:
Implementation of Basic Inheritance and Multiple Inheritance using python
AIM: To Implementation of Classes, Modules and Packages using python
ALGORITHM:
Step 1. Start the program and define two base classes, base and base1, each
with an add and mult method respectively.
Step 2. Define a class child that inherits from base. As part of its
definition, print a string that includes the result of calling the add method
from base with arguments 10 and 5.
Step 3. Define a class child1 that inherits from both base and base1. As
part of its definition, print a string that includes the result of calling
the add method from base and the mult method from base1, both with
arguments 20 and 5.
Step 4. The print statements in child and child1 are executed as part of the
class definitions, displaying the results of the method calls.
Step 5. The program ends after defining the classes and executing the print
statements."""





class base:
def init (self):
pass
def add(x,y):
return (x+y)
class base1:
def init (self):
pass
def mult(x,y):
return (x+y)
class child(base):
print('This is the example of basic inheritance\n10 + 5 = ',base.add(10,5))
class child1(base,base1):
print('Example of mutiple inheritance\n20 + 5 =',base.add(20,5),'\n20 * 5 =
',base1.mult(20,5))
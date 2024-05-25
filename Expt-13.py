"""QUESTION:
Implementation of Decorator – Design patterns using python.
AIM:
To write a Python code to implement Decorator - Design patterns.
ALGORITHM:
Step 1. Start the program.
Step 2. Create a function that provides the core behaviour that you want to 
decorate.
Step 3. Define a decorator function that takes another function as an 
argument Create and Initialize a List.
Step 4. Define a wrapper function inside the decorator. Create and 
Initialize a Set.
Step 5. In the wrapper, add the additional behaviour before or after calling 
the core function.
Step 6. Return the wrapper function from the decorator.
Step 7. Use the @decorator_name syntax to apply the decorator to the core 
function.
Step 8. Stop the program"""



class Coffee: 
def cost(self):
pass
def ingredients(self): 
pass
class SimpleCoffee(Coffee): 
def cost(self):
return 1.0
def ingredients(self): 
return "Coffee"
class CoffeeDecorator(Coffee): 
def init (self, coffee): 
self._coffee = coffee
def cost(self):
return self._coffee.cost() 
def ingredients(self):
return self._coffee.ingredients() 
class Milk(CoffeeDecorator):
def init (self, coffee): 
super(). init (coffee)
def cost(self):
return super().cost() + 0.5 
def ingredients(self):
return super().ingredients() + ", Milk" 
class Sugar(CoffeeDecorator):
def init (self, coffee): 
super(). init (coffee)
def cost(self):
return super().cost() + 0.25
def ingredients(self):
return super().ingredients() + ", Sugar" 
coffee = SimpleCoffee()
print(f"Cost: {coffee.cost()}, Ingredients: {coffee.ingredients()}") 
coffee = Milk(coffee)
print(f"Cost: {coffee.cost()}, Ingredients: {coffee.ingredients()}") 
coffee = Sugar(coffee)
print(f"Cost: {coffee.cost()}, Ingredients: {coffee.ingredients()}")
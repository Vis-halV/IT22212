"""QUESTION:
Implementation of Tuples, Dictionaries, List, Sets using python
AIM:
To write a Python code to implement Tuples, Dictionaries, List, Sets.
ALGORITHM:
Step 1. Start the program.
Step 2. Create and Initialize a Dictionary.
Step 3. Perform Operations on the Dictionary like adding key-value pairs, 
accessing values using keys, updating values, deleting key-value pairs.
Step 4. Create and Initialize a List. 
Step 5. Perform Operations on the List. 
Step 6. Create and Initialize a Set.
Step 7. Perform Operations on the Set.
Step 8. Stop the program."""




# Tuple
my_tuple = ("apple", "banana", "cherry") 
print(my_tuple)
# Dictionary
my_dict = {"name": "John", "age": 30} 
print(my_dict) # List
my_list = ["apple", "banana", "cherry"]
print(my_list)
# Set
my_set = {"apple", "banana", "cherry"} 
print(my_set)
my_set.add("orange") 
print(my_set) 
my_set.remove("banana") 
print(my_set)
my_set.update({"grape", "strawberry"}) 
print(my_set)
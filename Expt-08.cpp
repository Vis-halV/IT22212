/*QUESTION:
Implementation of Exception Handling Mechanism using C++ ,
Arithmetic Exceptions using built in class exceptions.
AIM:
To implement Arithmetic Exception using built in class exception.
ALGORITHM:
1. Start the program.
2. Initialize necessary variables and data structures.
3. Begin a try-catch block to handle potential exceptions.
4. In the try block, perform the main logic of the program. This could involve various
operations such as reading from a file, processing data, or interacting with a user.
5. If an exception is thrown during the execution of the try block, catch the exception
in the catch block.
6. In the catch block, retrieve the message associated with the exception using the `
what()` method.
7. Print the error message to the standard error stream using `cerr`.
8. End the catch block.
9. After the try-catch block, perform any necessary cleanup operations.
10. Return 0 to indicate that the program has finished successfully.
11. End the program. */


#include <iostream>
#include <stdexcept>
Using namespace std;
double divide(int dividend, int divisor)
{
if (divisor == 0)
{
throw runtime_error("Divide by zero error");
}
return static_cast<double>(dividend) / divisor;
}
int main()
{
int dividend, divisor;
cout << "Enter dividend: ";
cin >> dividend;
cout << "Enter divisor: ";
cin >> divisor;
try
{
double result = divide(dividend, divisor);
cout << "Result of division: " << result << endl;
}
catch (const runtime_error& ex)
{
cerr << "Error: " << ex.what() << endl;
}
return 0;
}




/*QUESTION( B ):
Implementation of Exception Handling Mechanism using C++ , To raise
an exception if any attempt is made to refer to an element whose index is beyond
the array size (using user defined exceptions).
AIM:
To implement a c++ program to raise an exception if any attempt is made
to refer to an element whose Index is beyond the array size.
ALGORITHM:
1. Start the program.
2. Include the necessary libraries: `iostream` for input/output operations and `stdexcept
` for standard exceptions.
3. Use the `std` namespace to avoid having to prefix `std::` before every standard
library object.
4. Define a custom exception class `IndexOutOfRangeException` that inherits from the
standard `exception` class.
5. Inside the `IndexOutOfRangeException` class, override the `what()` method. This
method returns a string that describes the exception.
6. The overridden `what()` method returns the string "Index out of range". This is the
message that will be displayed when an `IndexOutOfRangeException` is thrown and
caught.
7. End the definition of the `IndexOutOfRangeException` class.
8. Define a function `getElement` that takes three parameters: a constant integer array `
arr`, an integer `size` representing the size of the array, and an integer `index`
representing the index of the element to retrieve.
9. Inside the `getElement` function, perform the following steps:
1. Check if the `index` is within the valid range of the array (i.e., `index` is greater
than or equal to 0 and less than `size`). If not, throw an `IndexOutOfRangeException`.
2. If the `index` is valid, return the element at the specified index in the array.
10. End the definition of the `getElement` function.
11. The main function or other parts of the program (not shown in the provided code)
would then use the `getElement` function to retrieve elements from an array, handling
any `IndexOutOfRangeException` that might be thrown.*/


#include <iostream>
#include <stdexcept>
Using namespace std;
class IndexOutOfRangeException : public exception
{
public:
const char* what() const noexcept override
{
return "Index out of range";
}
};
int getElement(const int arr[], int size, int index)
{
if (index < 0 || index >= size)
{
throw IndexOutOfRangeException();
}
return arr[index];
}
int main()
{
int arr[] = {10, 20, 30, 40, 50};
int size = sizeof(arr) / sizeof(arr[0]);
try
{
cout << "Element at index 2: " << getElement(arr, size, 2) << endl;
cout << "Element at index 5: " << getElement(arr, size, 5) << endl;
cout << "Element at index -1: " << getElement(arr, size, -1) << endl;
}
catch (const IndexOutOfRangeException& ex)
{
cerr << "Error: " << ex.what() << endl;
}
return 0;
}





/*QUESTION( C ):
Implementation of Exception Handling Mechanism using C++ ,
Design Stack class using array with necessary exception handling
AIM:
To implement a c++ program to desgn stack class using array with necessary
exception handling.
ALGORITHM:
1. Start the program and include the necessary libraries: `iostream` for input/output
operations and `stdexcept` for standard exceptions.
2. Use the `std` namespace to avoid having to prefix `std::` before every standard
library object.
3. Define a custom exception class `StackUnderflowException` that inherits from the
standard `exception` class.
4. Inside the `StackUnderflowException` class, override the `what()` method to
return the string "Stack underflow".
5. Define another custom exception class `StackOverflowException` that also
inherits from the standard `exception` class.
6. Inside the `StackOverflowException` class, override the `what()` method to return
the string "Stack overflow".
7. Define a template class `Stack` that takes two parameters: a type `T` and an integer
`SIZE`.
8. Inside the `Stack` class, declare private member variables. These will likely
include an array or other data structure to hold the stack elements, and possibly an
integer to keep track of the current size of the stack.
9. Define public methods for the `Stack` class. These will likely include methods like
`push` to add an element to the top of the stack, `pop` to remove the top element, and
`top` to access the top element without removing it.
10. In the `push` and `pop` methods, check for stack overflow and underflow
conditions respectively. If these conditions are met, throw the appropriate exceptions.
11. In the `main` function or other parts of the program, create a `Stack` object and
use its methods to perform stack operations, handling any `StackUnderflowException
` or `StackOverflowException` that might be thrown.*/


#include <iostream>
#include <stdexcept>
Using namespace std;
class StackUnderflowException : public exception
{
public:
const char* what() const noexcept override
{
return "Stack underflow";
}
class StackOverflowException : public exception
{
public:
const char* what() const noexcept override
{
return "Stack overflow";
}
};
template<typename T, int SIZE> 
class Stack
{
private:
T elements[SIZE];
int top;
public:
Stack() : top(-1) {}
void push(const T& element)
{
if (top == SIZE - 1)
{
throw StackOverflowException();
}
elements[++top] = element;
}
T pop() {
if (top == -1)
{
throw StackUnderflowException();
}
return elements[top--];
}
T peek() const
{
if (top == -1)
{
throw StackUnderflowException();
}
return elements[top];
}
bool isEmpty() const
{
return top == -1;
}
bool isFull() const
{
return top == SIZE - 1;
}
};
int main()
{
Stack<int, 5> intStack;
try
{
intStack.push(10);
intStack.push(20);
intStack.push(30);
cout << "Popped element: " << intStack.pop() << endl;
cout << "Popped element: " << intStack.pop() << endl;
cout << "Popped element: " << intStack.pop() << endl;
cout << "Popped element: " << intStack.pop() << endl;
}
catch (const StackUnderflowException& ex)
{
cerr << "Error: " << ex.what() << endl;
}
catch (const StackOverflowException& ex)
{
cerr << "Error: " << ex.what() << endl;
}
return 0;
}

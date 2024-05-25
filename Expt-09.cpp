/*QUESTION:
Design Stack class using array with necessary exception handling
AIM:
To implement a c++ program to design stack class using array.
ALGORITHM:
1. Start the program and create an instance of the `Stack` class, named `intStack`.
2. Push the integer 10 onto `intStack` using the `push` method.
3. Push the integer 20 onto `intStack` using the `push` method.
4. Push the integer 30 onto `intStack` using the `push` method.
5. Begin a try-catch block to handle potential exceptions.
6. Inside the try block, pop an element from `intStack` using the `pop` method and
print the popped element.
7. Repeat the pop operation and print the popped element.
8. Repeat the pop operation again and print the popped element.
9. Attempt to pop an element from `intStack` one more time and print the popped
element. Since only three elements were pushed onto the stack, this operation will
likely cause a `StackUnderflowException` to be thrown.
10. In the catch block for `StackUnderflowException`, print an error message along
with the exception's message.
11. In the catch block for `StackOverflowException`, print an error message along
with the exception's message. This catch block may not be necessary in this specific
context, as no stack overflow condition is apparent in the provided code.*/


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
};
class StackOverflowException : public exception
{
public:
const char* what() const noexcept override
{
return "Stack overflow";
}
};
template<typename T, int SIZE>
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
Try
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
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






/*QUESTION( B ):
Implementation of List using Standard Template Library using C+
AIM:
To implement of list using standard template library using c++.
ALGORITHM:
1. Start the program and create an instance of a list, named `myList`.
2. Use the `push_back` method to add the integer 2 to the end of `myList`.
3. Use the `push_front` method to add the integer 3 to the beginning of `
myList`.
4. Print the string "List elements: " to the console to indicate that the list
elements will be printed next.
5. Begin a for loop to iterate over each element in `myList`. The loop variable
`num` takes on the value of each element in turn.
6. Inside the loop, print the value of `num` followed by a space. This prints
each element of the list to the console.
7. After the loop, print a newline character to the console to end the line of
output.
8. Use the `pop_back` method to remove the last element from `myList`.
9. Print the string "Updated list elements: " to the console to indicate that the
updated list elements will be printed next.
10. Begin another for loop to iterate over each element in the updated `myList
`. The loop variable `num` takes on the value of each element in turn.
11. Inside the loop, print the value of `num` followed by a space. This prints
each element of the updated list to the console. After the loop, print a newline
character to the console to end the line of output, and end the program with a
return value of 0*/




#include <iostream>
#include <list>
Using namespace std;
int main()
{
list<int> myList;
myList.push_back(1);
myList.push_back(2);
myList.push_front(3);
cout << "List elements: ";
for (int num : myList)
{
cout << num << " ";
}
cout << endl;
myList.pop_back();
cout << "Updated list elements: ";
for (int num : myList)
{
cout << num << " ";
}
cout << endl;
return 0;
}
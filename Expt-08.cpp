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
11. End the program*/


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
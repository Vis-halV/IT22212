/* EXPT-03 (A)

QUESTION:

Write a program in C++ to define a class Complex representing complex numbers. Include private data members for real and imaginary parts. Declare a friend function add() to add two complex numbers.

AIM:

To implement Complex number addition using Friend function in C++

ALGORITHM:

Step 1: Start
Step 2: Define a class complex with private members real and imag, which are arrays of 3 integers each.
Step 3: In the complex class, define a method getdata that asks the user to enter the real and imaginary parts of two complex numbers and stores them in the first two elements of real and imag.
Step 4: Declare add as a friend function of the complex class. 
Step 5: Define the add function outside the class.
Step 6: create an object c1 of the complex class. 
Step 7: call the getdata function and the add function 
Step 8: Stop*/


#include <iostream> 
using namespace std;

class complex
{
  int real[3], imag[3]; 
 public:
  void getdata(){
   cout << "Enter the real and imaginary part of 1st complex number: ";
   cin >> real[0] >> imag[0];
   cout << "Enter the real and imaginary part of 2nd complex number: "; 
   cin >> real[1] >> imag[1];
  }
  friend void add(complex& c1);
};

void add(complex& c1){ 
  c1.real[2]=c1.real[0]+c1.real[1];
  c1.imag[2]=c1.imag[0]+c1.imag[1];
  cout << "The sum of the complex numbers is: " << c1.real[2] << " + " << c1.imag[2] << "i" << endl;
}

int main()
{
  complex c1; 
  c1.getdata();
  add(c1); 
  return 0;
}


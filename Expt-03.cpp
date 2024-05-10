/* EXPT-03 ( A )

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



/* EXPT-03 ( B )

QUSTION:
  
Define a class "BankAccount" with private data members for account balance and account holder name. Create a friend class "BankManager" that can access and modify the balance of any bank account.

AIM:
  
To implement the above condition using Friend Class in C++

ALGORITHM:

Step 1: Start
Step 2: Define a class bankaccount with private members accbal and name. Initialize accbal to 0 and name to "Yugan".
Step 3: Declare bankmanager as a friend class of bankaccount.
Step 4: Define a class bankmanager with a public method changebal.
Step 5: In the changebal method, ask the user to enter a new balance, add it to the accbal of the passed bankaccount object, and print the name and updated accbal of the bankaccount object.
Step 6: In the main function, create an object b of the bankaccount class and an object m of the bankmanager class.
Step 7: Call the changebal method on m with b as the argument to change the balance of b and print its details.
Step 8: End*/


#include <iostream> 
using namespace std; 

class bankaccount
{
 float accbal=0;
 string name="Ramki";

public:
 friend class bankmanager;
};

class bankmanager
{
 public:
  void changebal(bankaccount& b1)
   {
    float bal;
     cout<<"Enter the new balance: "; cin>>bal; 
     b1.accbal=b1.accbal+bal;
     cout<<"Account Holder:"<<b1.name<<endl; 
     cout<<"Account Balance:"<<b1.accbal<<endl;
   }
};

int main()
{
  bankaccount b; 
  bankmanager m; 
  m.changebal(b); 
  return 0;
}

/*QUESTION:

Implement a C++ class named BankAccount to represent a bank account with private members accountNumber(string) and balance(double). Write a constructor to initialize the account number and initial balance, and a destructor to print a closing message with the account number. Implement member functions deposit(double amount), withdraw(double amount), and displayAccountInfo() to manage and display account details. Demonstrate deposit and withdrawal operations on the accounts and the automatic invocation of destructors when the account objects go out of scope

AIM:

To implement the above condition using Constructor and Destructor in c++.

ALGORITHM:

1.	Start
2.	Define a class BankAccount
3.	Define a constructor for BankAccount .
4.	Define a deposit method in BankAccount .
5.	Define a withdraw method in BankAccount .
6.	Define a displayAccountInfo method
7.	Define a destructor for BankAccount.
8.	In the main function, create a BankAccount object obj with an account number of "1456789" and a balance of 20000.20.
9.	Call the deposit method on obj with an argument of 5000. This adds 5000 to the balance of obj and prints the new balance.
10.	Call the withdraw method on obj with an argument of 2000. This subtracts 2000 from the balance of obj and prints the new balance.
11.	Call the displayAccountInfo method on obj to print its account number and balance.
12.	End the main function with return 0. At this point, obj goes out of scope, so its destructor is automatically called, printing a message that the account is closed.
13.	End*/

#include<iostream> 
using namespace std; 
class BankAccount
{
 private:
  string accountnumber; 
  double balance; 
 public:
  BankAccount(string a,double b)
   {
    accountnumber=a; 
    balance=b;
    cout<<"Account number is \t"<<accountnumber<<endl<<"the balance amount is\t"<<balance<<endl;
   }
  void deposit(double amount){
    cout<<"After deposited is "<<balance+amount<<endl;
   }
  void withdraw(double amount){
    cout<<"After withdraw is "<< balance-amount<<endl;
   }
  void displayAccountInfo(){
    cout<<"the account number is "<<accountnumber<<endl; cout<<"the bank balance is "<<balance<<endl;
   }
  ~BankAccount()
   {
     cout<<"the account number "<<accountnumber<<"is closed";
   }
};
int main()
{
BankAccount obj("1456789",20000.20); 
obj.deposit(5000);
obj.withdraw(2000); 
obj.displayAccountInfo();
}


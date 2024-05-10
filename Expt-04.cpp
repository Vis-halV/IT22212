/*QUESTION (A):

Develop a C++ program with overloaded functions to find the sum of elements in an integer array, sum of elements in a float array, and sum of elements in a double array.

AIM:

To implement the above condition using Function Overloading in c++.

ALGORITHM:

Step 1:Start
Step 2:Define three functions named sum, each taking a different type of array (int, float, double) as an argument.Each function calculates the sum of the elements in the array and returns it.
Step 3:In the main function, define three arrays of different types (int, float, double) and initialize them with values.
Step 4:Call the sum function for each array and print the returned sum. 
Step 5:End*/

PROGRAM:

#include <iostream> 
using namespace std;

int sum(int a[]){ 
  int sum=0;
  for (int i = 0; i < 5; i++)
  {
    sum+=a[i];
  }
  return sum;
}

float sum(float b[]){ 
  float sum=0;
  for (int i = 0; i < 5; i++)
  {
    sum+=b[i];
  }
  return sum;
}

double sum(double c[]){ 
  double sum=0;
  for (int i = 0; i < 5; i++)
  {
    sum+=c[i];
  }
  return sum;
}

int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  float b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double c[5] = {1.11, 2.22, 3.33, 4.44, 5.55};
  cout<<"The sum of integer array is "<<sum(a)<<endl; 
  cout<<"The sum of float array is "<<sum(b)<<endl; 
  cout<<"The sum of Diuble array is "<<sum(c)<<endl;
}



/*QUESTION (B):

Write a C++ program to perform the following matrix operations over two N × N matrices A and B by overloading the operators as member functions and friend functions: A + B , A – B, A* B, A<B(should return true if all elements in A are less than all elements in B, otherwise false), A==B (should return true if all elements in A are equal to all elements in B, ie, A[i][j] == B[i][j]; otherwise false).

AIM:

To implement the above condition using Operator Overloading in c++.

ALGORITHM:

Step 1:Start
Step 2:Define a class BankAccount
Step 3:Define private members accountnumber (string) and balance (double).
Step 4:Define a constructor for BankAccount that takes a string and a double as arguments. This constructor initializes accountnumber and balance with the provided arguments and prints the account number and balance.
Step 5:Define a deposit method in BankAccount that takes a double as an argument. This method calculates the new balance after deposit by adding the argument to balance and prints the amount to be deposited.
Step 6:Define a withdraw method in BankAccount that takes a double as an argument. This method calculates the new balance after withdrawal by subtracting the argument from balance and prints the amount to be withdrawn.
Step 7:In the main function (not shown in the excerpt), create a BankAccount object with an account number and a balance.
Step 8:Call the deposit method on the BankAccount object with a certain amount to deposit. This adds the amount to the balance of the account and prints the amount to be deposited.
Step 9:Call the withdraw method on the BankAccount object with a certain amount to withdraw. This subtracts the amount from the balance of the account and prints the amount to be withdrawn.
Step 10:End*/


#include <iostream> 
using namespace std; 
class Complex 
{ 
public:
int a[3][3], b[3][3], c[3][3];
 
void get() {
  cout << "Enter the matrix of a: ";
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) { 
      cin >> a[i][j];
    }
  }
}
void get2() {
  cout << "Enter the matrix of b: "; 
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> b[i][j];
    }
  }
}

void display() {
  for(int i = 0; i < 3; i++) { 
    for(int j = 0; j < 3; j++) {
      cout << c[i][j] << "\t";
    }
    cout << "\n";
  }
}

Complex operator+(Complex &s2) {
  cout << "The sum of a and b matrix is: " << endl; 
  Complex s;
  for(int i = 0; i < 3; i++) { 
    for(int j = 0; j < 3; j++) {
      s.c[i][j] = a[i][j] + s2.b[i][j];
    }
  }
  return s;
}

Complex operator-(Complex &s2) {
  cout << "The difference of matrix a and b is: " << endl; 
  Complex s;
  for(int i = 0; i < 3; i++) { for(int j = 0; 
    j < 3; j++) {
      s.c[i][j] = a[i][j] - s2.b[i][j];
    }
     }
  return s;
}
 
friend Complex operator<(Complex &s1, Complex &s2); 
friend Complex operator*(Complex &s1, Complex &s2); 
friend Complex operator==(Complex &s1, Complex &s2);
};

Complex operator*(Complex &s1, Complex &s2) { 
  cout << "The product of two matrices is: " << endl; 
  Complex s;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      s.c[i][j] = 0;
      for(int k = 0; k < 3; k++) {
        s.c[i][j] += s1.a[i][k] * s2.b[k][j];
      }
    }
  }
  return s;
}

Complex operator<(Complex &s1, Complex &s2) { 
  Complex s;
  int flag = 0;
  for(int i = 0; i < 3; i++) { 
    for(int j = 0; j < 3; j++) {
      if(s1.a[i][j] < s2.b[i][j]) { 
        flag = 1;
      }
    }
  }
  if(flag == 1) {
    cout << "True"<<endl;
  } 
  else {
    cout << "False"<<endl;
  }
  return s;
}
Complex operator==(Complex &s1, Complex &s2) { 
  Complex s;
  int flag = 0;
  for(int i = 0; i < 3; i++) { 
    for(int j = 0; j < 3; j++) {
      if(s1.a[i][j] == s2.b[i][j]) { 
        flag = 1;
      }
    }
  }
  if(flag == 1) {
    cout << "True";
  } else {
    cout << "False";
  }
  return s;
}

int main() 
{ 
  Complex s1, s2, s; 
  s1.get();
  s2.get2();
  s = s1 + s2; s.display(); 
  s = s1 - s2; s.display(); 
  s = s1 * s2; s.display(); 
  s1 < s2;
  s1 == s2;
  return 0;
}




/*QUESTION (C):

Create a C++ program to overload the unary "++" operator as a member function for reversing a string. Define a class representing a string with appropriate member functions. Implement the reversal operation using unary operator overloading.

AIM:

To implement the above condition using Opera in c++.

ALGORITHM:

Step 1.	Start
Step 2.	Define a class word with a public member str of type string.
Step 3.	Define a member function getinfo that prompts the user to enter a word and stores it in str.
Step 4.	Define an overload for the prefix increment operator ++. This function reverses the string str and returns the current object.
Step 5.	In the main function, create an object w of class word. 
Step 6.	Call the getinfo function on w to get the user's input.
Step 7.	Use the prefix increment operator ++ on w to reverse the string. 
Step 8.	Print the reversed string.
Step 9.	End*/


#include <iostream> 
using namespace std; 

class word
{
public:
string str;
void getinfo(){ 
  cout<<"Enter the word: "; 
  cin>>str;
}

word operator ++(){ 
  string temp = str; 
  int n = str.length();
  for(int i=0; i<n; i++){ 
    str[i] = temp[n-i-1];
  }
  return *this;
}
};

int main()
{
  word w; 
  w.getinfo();
  ++w;
  cout<<w.str; 
  return 0;
}




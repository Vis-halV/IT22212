/*QUESTION:

Implementation of Student details using classes and objects in C++.

AIM:

To implement student details using classes and objects in c++

ALGORITHM:

Step 1: start
Step 2: Define the student class with private data members: roll no, name, avg, and marks
Step 3: Define public member functions: display() and getInfo() 
Step 4: Inside getInfo():
 a)	Read and store roll no. in roll no
 b)	Read and store name in name
 c)	Use a loop to read and store each mark in marks[] array
 d)	Calculate the average of marks
Step 5: Inside display: Display student’s name, roll-no and avg. Step 
6: Create an object of student class S and call two functions. 
Step 7: end
*/

#include <iostream> 
#include <string> 
using namespace std; 

class student
{

 private:
  int roll_no,i;  
  string name; 
  float avg=0;
  int marks[5];

 public:
 void display(); 
 void getinfo()
 {
    cout <<"Enter the roll no:"; cin >>roll_no;
    cout <<"Enter the name:"; cin >>name;
    for ( i = 0; i < 5; i++)
    {
     cout <<"Enter the subject "<<(i+1)<<" Marks:";  
     cin>>marks[i];
     avg+=marks[i];
    }
    avg/=5;
  }
};

void student::display()
{
 cout <<"Your name :"<<name<<endl<<"Your Rollno:"<<roll_no<<endl<<"Your Avg is :"<<avg<<"%";
}

int main()
{
student s; 
s.getinfo();
s.display();
}

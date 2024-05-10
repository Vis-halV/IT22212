/*QUESTION:

Implementation of Function Template in C++ to sort an arrayofimplicit types like int, float, char etc. 
And user-definedobjects(sort Emp objects according to empno).

AIM:

To implement Function Template in C++ to do sorting of arrays of all datatypes.

ALGORITHM:

Step1:Start the program
Step2:Create a function called sort array that take an array of strings as input.
Step3:Use the sort function from the<algorithm>library to sort the string array in ascending order and Print sorted string array:
Step4:Iterate through the sorted array and print each element on a newline.
Step5:Create a template function called sort arr that takes an array of any type as input.
Step6:Implement the Bubble Sort algorithm to sort the array elements in ascending order.
Step7:Iterate through the array comparing adjacent elements and swapping them if they are in the wrong order and Print sorted array:
Step8:Iterate through the sorted array and print each element on a newline. 
Step 9: Begin the main function, Initialize integer, float, and string arrays.
Step10:Declare and initialize arrays of integers, floats,and strings with sample values.
Step11:Call sort array function,Call the sort array function to sort the arrayof strings.
Step12:Call sort arr function for integers and floats, Call the sort arr function twice, once with the integer array and once with the float array, to sort them.
Step13:Stop the program.*/



#include <iostream> 
#include <cstring> 
using namespace std;

template<typenameT> 
void sort(T a[], int n){
  T t; 
  inti,j;
  for(i = 0; i <n -1;i++) {
    for (j=0;j<n-i - 1;j++) {
      if(a[j]>a[j+1])
      {
        t=a[j]; 
        a[j]=a[j+1]; 
        a[j+1] = t;
      }
    }
  }
}
 


template<>

void sort(char a[][100],int n) {
  
char t[100]; 
int i, j;
  for(i = 0; i <n -1;i++) {
    for (j=0;j<n-i - 1;j++) {
      if(strcmp(a[j],a[j+1])>0) {
        strcpy(t,a[j]);
        strcpy(a[j],a[j+1]);
        strcpy(a[j+1],t);
      }
    }
  }
}

int main()
{
  int n,i;
  cout<<"Enter\n1-Int\n2-Float\n3-char\n"; 
  cin>> n;
  switch(n)
  {
    case 1:
      intn1; 
      inta[100];
      cout<<"EnterNValue:";
      cin>>n1;
      for(i = 0;i<n1;i++){
        cin>>a[i];
      }
      sort<int>(a,n1); 
      cout<<"AfterSorting:";
      for (i = 0; i < n1; i++){
        cout<<a[i];
      }
      break;
    case 2:
      int n2;
      float b[100]; 
      cout<<"EnterNValue:"; 
      cin>> n2;
      for(i = 0;i<n2;i++){
        cin>>b[i];
      }
      sort<float>(b,n2); 
      cout<<"AfterSorting:\n"; 
      for (i = 0; i < n2; i++)
      {
        cout << b[i]; cout<<"\n";
      }
      break; 
    case 3:
      int n3;
      char c[100][100];
      cout<<"EnterNValue:"; 
      cin>> n3;
      for(i = 0;i<n3;i++){
        cin>>c[i];
      }
      sort(c,n3); 
      cout<<"AfterSorting:\n"; 
      for (i = 0; i < n3; i++)
      {
        cout << c[i]; 
        cout<<"\n";
      }
      break;
  }
  return0;
}

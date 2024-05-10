/*QUESTION:

Q1) Implementation of Vehicle class using Virtual Functions in C++.

AIM:

To create an C++ program to implement vehicle class using virtual function

ALGORITHM:

Step 1: Start the Program
Step 2: Define a base class vehicle, which has a public virtual function named details
Step 3: Create derived classes, sports, Retro, and Adventure classes inherited from the vehicle class. 
        Each derived class overrides the details function to print specific details about sports bikes, retro bikes, 
        and adventure bikes respectively
Step 4: In main function, Declare a vehicle pointer v and a vehicle object g. 
        Create objects of each derived class (sports, Retro, and Adventure). 
        Assign the address of each object in turn to the v pointer.
Step 5: Call v->details() for each object pointed to by v. 
Step 6: End the program.*/




#include<iostream> 
using namespace std; 
class vehicle
{ 
public:

virtual void details(){
  cout<<"TYPE: TWO WHEELER"<<endl;
  cout<<"MODEL: RX 100"<<endl; 
  cout<<"CC: 100 cc"<<endl;
  cout<<"ENGINE: TWO STROKE ENGINE"<<endl;
}
};

class sports:public vehicle
{ 
public:
void details(){
  cout<<"TYPE: TWO WHEELER"<<endl;
  cout<<"MODEL: ZX 10R"<<endl;
  cout<<"CC: 750 CC"<<endl;
  cout<<"ENGINE:SINGLE STROKE DUAL CYLINDER"<<endl;
}
};

class Retro:public vehicle
{ 
public:
void details(){
  cout<<"TYPE: TWO WHEELER"<<endl;
  cout<<"MODEL: ROYAL ENFIELD CLASSIC 350"<<endl;
  cout<<"CC: 350 CC"<<endl;
  cout<<"ENGINE: SINGLE STROKE SINGLE CYLINDER"<<endl;
}
};

class Adventure:public vehicle
{ 
public:
void details(){
  cout<<"TYPE: ADVENTURE TWO WHEELER"<<endl; 
  cout<<"MODEL: BMW GS350"<<endl;
  cout<<"CC: 350"<<endl;
  cout<<"ENGINE: SINGLE CYLINDER"<<endl;
  cout<<endl;
}
};

int main()
{ 
  vehicle *v,g;
  v=&g;
  v->details(); 
  sports s; 
  v=&s;
  v->details(); 
  Retro r; 
  v=&r;
  v->details(); 
  Adventure a; 
  v=&a;
  v->details(); 
  return 0;
}




/*QUESTION

Q2) 

Create an abstract class Animal with virtual functions makeSound() and move(). 
Derive classes Dog and Bird from Animal. 
Implement the virtual functions in each derived class to represent the sound and movement of a dog and bird, respectively.
Demonstrate polymorphism by creating objects of type Animal, Dog, and Bird and calling the virtual functions on each object

AIM:

To create an C++ program using inheritance to do a hospital management system

ALGORITHM:

Step 1: Start the program
Step 2: Define an abstract class Animal with two pure virtual functions makesound() and move().
Step 3: Define a class Dog that inherits from Animal and implements the makesound() and move() functions. 
        In makesound(), print “DOG SOUND: woof woof woof”. 
        In move(), print “DOG MOVE: Moves forward with one rear foot, then the other rear foot moves at the same time”.
Step 4: Define a class Bird that also inherits from Animal and implementsthe makesound() and move() functions. 
        In makesound(), print “BIRD SOUND: KU KU KU”.
        In move(), print “BIRD MOVE: Flapping their wings, steering mainly with their tails”.
Step 5: In the main() function:Declare a pointer a of type Animal.
Step 6:Create an object d of type Dog and an object b of type Bird. 
Step 7:Assign the address of d to a. Call the makesound() and move() functions on d.
Step 8:Assign the address of b to a. Call the makesound() and move() functions on b. 
Step 9: End the Program*/




#include<iostream> 
using namespace std; 
class Animal
{ 
public:
virtual void makesound()=0; 
virtual void move()=0;
};

class Dog: public Animal
{ 
public:
void makesound(){
  cout<<endl<<"DOG SOUND: woof woof woof"<<endl;
}

void move(){
  cout<<endl<<"DOG MOVE: Moves forward with one rear foot, then the other rear foot moves at the same time "<<endl;}
};

class Bird: public Animal
{
public:
void makesound(){
  cout<<endl<<"BIRD SOUND: KU KU KU"<<endl;
}
void move(){
  cout<<endl<<"BIRD MOVE: Flapping their wings, steering mainly with their tails"<<endl;
}
};
 
int main()
{ 
  Animal *a; 
  Dog d; 
  Bird b; 
  a=&d;
  d.makesound(); 
  d.move(); a=&b; 
  b.makesound(); 
  b.move(); 
  return 0;
}

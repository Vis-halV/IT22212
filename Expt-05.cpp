/*QUESTION ( A )

Implementation an hospital management system to effectively handle patient admissions, appointments, and medical records. The system includes a base class Patient with common attributes and methods shared by all patient types. Derived classes InPatient, OutPatient, and EmergencyPatient inherit from the Patient base class, allowing them to access and utilize common patient attributes and methods. Additionally, each derived class includes specialized attributes and methods relevant to its patient type. This inheritance model enables the hospital management system to efficiently manage patient data and ensure timely and prioritized care for all patients, including those admitted for treatment, visiting for consultations or tests, and requiring immediate priority treatment.

AIM:

To create a C++ program using inheritance to do a hospital management system.

ALGORITHM:

Step 1:Start the program.
Step 2:Define the patient class with the required attributes and methods.
Step 3: Define Inpatient class which inherits from the patient class with additional attributes and methods.
Step 4:Define Out patient class which inherits from the patient class with the additional attributed and methods.
Step 5: Define the Emergency class which inherits from the Patient class with the additionalmethods.
Step 6:In main function,Base do user’s input create an object of the corresponding class(Inpatient, outpatient or Emergency) and call the display() method to display details. 
Step 7:End the program.*/



#include <iostream> 
using namespace std; 
class Patient
{
protected:
string Name;
int Height,Weight; 
public:
Patient()
{
  cout<<"Enter Name:"; 
  cin >> Name; 
  cout<<"Enter Height:"; 
  cin >> Height; 
  cout<<"Enter Weight:"; 
  cin >> Weight;
}

void display()
{
 cout<<"\nPatientDetails:\nName:"<<Name<<"\nHeight:"<<Height<<"\nWeight"<<Weight;
}
};

class InPatient:public Patient
{
private:
string InDate,InTime,Reason; 
public:
InPatient()
{
  cout<<"EnterInDate:dd-mm-yy"; 
  cin >> InDate; 
  cout<<"EnterInTimehr:min:sec"; 
  cin >> InTime; 
  cout<<"EnterReason:";
  cin >> Reason;
}

void disp()
{
 void display();  
 cout<<"\nInDate:"<<InDate<<"\nInTime:"<<InTime<<"\nReason: "<< Reason<<"\n";
}
};

class OutPatient:public Patient
{
private:
string OutDate,OutTime,Rec; 
public:
OutPatient(){
  cout<<"EnterOutDate:dd-mm-yy:"; 
  cin>> OutDate; 
  cout<<"EnterOutTimehr:min:sec:"; 
  cin>> OutTime; 
  cout<<"RecoveredYes/No:";
  cin>> Rec;
}

void show(){
  void display(); 
  cout<<"\nOutDate:"<<OutDate<<"\nOutTime:"<<OutTime<<"\nRecovered : "<< Rec <<"\n";
}
};

class EmergencyPatient:public Patient
{
private:
string Severity_Level,Reason; 
public:
EmergencyPatient(){
  cout<<"EnterReason:"; 
  cin >> Reason;
  cout<<"EnterSeverityLevel:"; 
  cin >> Severity_Level;
}
void print(){
  void display();
  cout << "\nReason:" << Reason << "\nSeverity Level High/Medium/Low: "<< Severity_Level;
}
};
 

int main()
{
  int n;
  cout<<"Enter\n1-InPatient\n2-OutPatient\n3-EmergencyPatient\n"; 
  cin >> n;
  if(n==1){
    InPatient x; x.disp();
  } 
  else if(n == 2){
    OutPatient y; 
    y.show();
  }
  else if(n == 3)
  {
    EmergencyPatient z; 
    z.print();
  }
}




/*QUESTION(B):

Design a train ticket booking system with a class hierarchy consisting of a base class Ticket and several derived classes such as OneWayTicket, RoundTripTicket, SleeperTicket, SeatedTicket, and DiscountedTicket. Each ticket type inherits common attributes and methods from the base class, while also including specialized attributes and methods specific to its type. Additionally, utilize multiple inheritance to integrate additional classes such as PaymentMethod and PassengerPreferences, providing functionalities like payment processing and passengercustomizationoptions.Thisdesignenhancesthesystem'scapabilitiesby offering various ticket types and additional features for a comprehensive booking experience.
AIM:

To create an C++ program using inheritance to create a Train Ticket booking system
ALGORITHM:

Step1: Start the program

Step2: Define classesTicket, passesngerpref, and Paymentmethodwiththeirrespective attributes and methods.
Step3: Inherit classes One way ticket ,Roundtrip,sleepeticket, seatedTicket,and DiscountTicket from Ticket, passesngerpref, and Paymentmethod classes.
Step4:In main() function,ask the user for the number of tickets they want to book.
Step5:Loop through the number of tickets and for each ticket:
 
a.	Displaythetickettypeoptions:

ONEWAYTICKET,ROUNDTRIPTICKET,SLEEPERTICKET,SEATED TICKET, and DISCOUNTED TICKET.
b.	Ask the user to enter their ticket preference.

c.	Based on the user's input, create an object of the corresponding ticket class (Onewayticket, Roundtrip, sleepeticket, seatedTicket, or DiscountTicket) and call its data() method.
Step 6: In the data() method of each ticket class, call the getdata() method to get the user's details and preferences. Based on the user's input in getdata(), set the ticket type, price, and other attributes.
Step 7: Call the preference() method to get the user's seat preference. Call the payment() method to get the user's payment details.
Step8:Display the ticket details using the display() method. Step 9: End the Program*/

#include<iostream> 
using namespace std; 
class Ticket
{
public:

string Destination,Quota;
int Train_No;
Ticket() {
  cout<<"EnterDestination:"; 
  cin>>Destination;
  cout<<"EnterQuotaGeneral/ForeignTourist/SeniorCitizen:"; 
  cin>>Quota; cout<<"ChooseTrain:\n234567,129423,825784";
  cin>>Train_No;
}

void display(){
  cout<<"Destination:"<<Destination<<endl; 
  cout<<"Quota"<<Quota; 
  cout<<"TrainNumber:"<<Train_No<<endl;
}
};

class PaymentMethod
{
string Pay_Method;

public: 

PaymentMethod(){
  cout<<"ChoosePaymentMethod:Gpay/Paytm/PhonePay";
  cin>>Pay_Method;
}

void display1(){
  cout<<"PaymentMethod:"<<Pay_Method;
}
};

class PassengerPreferences
{
string Pass_Pre; 
public:
PassengerPreferences(){
  cout<<"EnteryourPreferencesonanySubject:"; 
  cin>>Pass_Pre;
}

void display2(){
  cout<<"PassengerPreferences:"<<Pass_Pre<<endl;
}
};

class OneWayTicket:public Ticket,PaymentMethod,PassengerPreferences
{
int Seat_No; 
public: 

OneWayTicket(){
  if(Destination=="Chennai"){
    cout<<"AvailableSeats:1,6,7,10,32\nChooseaSeatNumber:"; 
    cin>>Seat_No;
  } 
  else if(Destination=="Bangalore"){
    cout<<"AvailableSeats:1,6,7,10,32\nChooseaSeatNumber:"; cin>>Seat_No;
  }
  else
  {
    cout<<"Ticketsarecurrentlyunavailable";
  }
}

void displaya(){
  void  display(); 
  cout<<"SeatNumber:"<<Seat_No;
}
};
 


class RoundTripTicket:public Ticket,PaymentMethod,PassengerPreferences
{
int Seat_No1,Seat_No2; 
public:
RoundTripTicket(){
  if(Destination=="Chennai"){
    cout<<"Nagercoil-Chennai\nAvailable Seats: 1,6,7,10,32\nChoose a Seat Number: ";
    cin>>Seat_No1;
    cout<<"Chennai-Nagercoil\nAvailable Seats: 1,6,7,10,32\nChoose a Seat Number: ";
    cin>>Seat_No2;
  }
  else if(Destination=="Bangalore"){
    cout<<"Nagercoil-Chennai\nAvailable Seats: 1,6,7,10,32\nChoose a Seat Number: ";
    cin>>Seat_No1;
    cout<<"Chennai-Nagercoil\nAvailableSeats:16,15,22\nChooseaSeat Number: ";
    cin>>Seat_No2;
  }
  else
  {
    cout<<"Ticketsarecurrentlyunavailable";
  }
}


void displayb(){

void display(); 
  cout<<"\nfrom"<<Seat_No1<<"\nto"<<Seat_No2<<endl;
}
};

class SleeperTicket:public Ticket,PaymentMethod,PassengerPreferences

{
int Seat_No; 
public:
SleeperTicket(){
  if(Destination=="Chennai"){
    cout<<"AvailableSeats:17,26,29,30,32\nChooseaSeatNumber:";
    cin>>Seat_No;
  }
  else if(Destination=="Bangalore"){
    cout<<"AvailableSeats:19,27,33\nChooseaSeatNumber:"; 
    cin>>Seat_No;
  }
  else{
    cout<<"Ticketsarecurrentlyunavailable";
  }
}

void displayc(){
void display(); 
  cout<<"SeatNumber:"<<Seat_No;
}
};

class SeatedTicket:public Ticket,PaymentMethod,PassengerPreferences
{
int Seat_No; 

public: 
SeatedTicket(){
  if(Destination=="Chennai"){
    cout<<"AvailableSeats:12,13,17\nChooseaSeatNumber:"; 
    cin>>Seat_No;
  }
  else if(Destination=="Bangalore"){
    cout<<"AvailableSeats:24,25,26\nChooseaSeatNumber:"; 
    cin>>Seat_No;
  }
  else{
    cout<<"Ticketsarecurrentlyunavailable";
  }
}

void displayd(){
  void display(); 
  cout<<"SeatNumber:"<<Seat_No<<endl;
}
};

class DiscountedTicket:public Ticket,PaymentMethod,PassengerPreferences
{
int Seat_No; 

public:
 
DiscountedTicket(){
  if(Destination=="Chennai"){
    cout<<"AvailableSeats:30,34\nChooseaSeatNumber:"; 
    cin>>Seat_No;
  }
  else if(Destination=="Bangalore"){
    cout<<"AvailableSeats:31,32\nChooseaSeatNumber:"; 
    cin>>Seat_No;
  }
  else{
    cout<<"Ticketsarecurrentlyunavailable";
  }
}

void displaye(){
 void  display();
  cout<<"SeatNumber:"<<Seat_No<<endl;
}
};

int main()
{
int n;
cout<<"Enter	\n1-OneWayTicket\n2-RoundTripTicket\n3-SleeperTicket\n4- Seater Ticket\n5-DiscountedTicket\n";
cin>>n; 
  if(n==1){
    OneWayTicket o; 
    o.displaya();
  }
  else if(n==2){
    RoundTripTicket t; 
    t.displayb();
  }
  else if(n==3){
    SleeperTicket s; 
    s.displayc();
  }
  else if(n==4){
    SeatedTicket s1; 
    s1.displayd();
  }
  else{
    DiscountedTicket d; 
    d.displaye();
  }
}

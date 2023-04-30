#include<iostream>
#include<iomanip> //using manipulators
#include<string>
using namespace std;




int main(){

int aNo;
cout<<"Enter the account number: ";
cin>>aNo;

string aHolderName;
cout<<"Enter the account holder name: ";
cin>>aHolderName;


string address;
cout<<"Enter your address: ";
cin>>address;

int contactNumber;
cout<<"Enter your contact number: ";
cin>>contactNumber;

float balance = 0;

//deposit the ammount into back account 
int checkAc;
cout<<"Enter your account no for deposit balance in your account: ";
cin>>checkAc;


if(checkAc == aNo){
    float deposit;
   cout<<"Enter your ammount for deposite into your banck account: ";
   cin>>deposit;
    balance = deposit;
    cout<<setfill('-'); //use of manipulators
    cout<<"Deposite balance: "<<setw(50)<<deposit<<"\nAvailable balance: "<<setw(49)<<balance<<endl; //use of manipulators
   
}else{
    cout<<"Please enter correct account no for deposit your balance in you account!";
}


    return 0;
}
#include<iostream>
#include<string>
using namespace std;


class Customer {

    int iD;
    string name;
    string address;
    int contactNo;

    public:

    void getData();
    void displayData();


};

void Customer::getData(){
 cout<<"Enter customer ID: ";
 cin>>iD;
 cout<<"Enter customer name: ";
 cin>>name;
 cout<<"Enter customer address: ";
 cin>>address;
 cout<<"Enter customer contact no: ";
 cin>>contactNo;
}

void Customer::displayData(){
    cout<<"-----------Customer Data Display-------------"<<endl;
    cout<<"Customer ID: "<<iD<<endl;
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Customer Address: "<<address<<endl;
    cout<<"Customer Contact No: "<<contactNo<<endl;
}

int main(){
    Customer c1;

    c1.getData();
    c1.displayData();


    return 0;
}
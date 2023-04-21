#include<iostream>
using namespace std;



int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num % 2 == 0) {
        cout<<"Even Number: "<<num<<endl;
    }else{
        cout<<"Odd Number: "<<num<<endl;
    }


    return 0;
}
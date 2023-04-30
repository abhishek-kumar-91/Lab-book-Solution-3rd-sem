#include<iostream>
using namespace std;


inline int increment_decrement_operation (int a, int b){
    int incdeca = --a;
    int incdecb = ++b;
    cout<<"decrement: "<<incdeca<<endl;
    cout<<"increment: "<<incdecb<<endl;
    return incdeca+incdecb;
}

int main(){

int a;
cout<<"Enter the a value that perform the decrement operation: ";
cin>>a;

int b;
cout<<"Enter the b value that perform the increment operation: ";
cin>>b;

cout<<"Addition of increment and decrement operators: "<<increment_decrement_operation(a, b)<<endl;

return 0;
}
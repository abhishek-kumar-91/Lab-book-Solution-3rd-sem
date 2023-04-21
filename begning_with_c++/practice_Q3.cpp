#include<iostream>
using namespace std;


//prime number check
int main () {

    int num;
    cout<<"Enter the number: ";
    cin>>num;

if(num > 1 && num % 2 != 0 || num == 2){
    cout<<"Prime Number: "<<num<<endl;
}else{
    cout<<"Not a prime number! ";
}
    
    return 0;
}
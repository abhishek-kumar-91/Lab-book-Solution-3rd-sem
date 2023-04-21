#include<iostream>
using namespace std;


int main() {

int num1, num2, num3;
cout<<"Enter three number: ";
cin>>num1>>num2>>num3;

int largestNumber = num1 > num2 ? (num1> num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
int smallestNumber = num1 < num2 ? (num1 < num3 ? num1: num3) : (num2 < num3 ? num2: num3);

cout<<"Largest Number: "<<largestNumber<<endl;
cout<<"Smallest Number: "<<smallestNumber<<endl;
    return 0;
}
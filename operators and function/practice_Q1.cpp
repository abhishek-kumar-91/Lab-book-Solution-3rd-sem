#include<iostream>
using namespace std;

inline float addition(float a, float b){
    return (a + b);
}

inline float substraction (float a, float b){
    return (a - b);
}

inline float multiplication(float a, float b){
    return (a * b);
}

inline float division(float a, float b){
    return (a / b);
}
int main(){
  
float a;
float b;
cout<<"Enter the a value: ";
cin>>a;
cout<<"Enter the b value: ";
cin>>b;

  //addition
 cout<<"Addition of two values: "<<addition(a, b)<<endl;
 //substraction
 cout<<"Substraction of two values: "<<substraction(a, b)<<endl;
 //multiplication
 cout<<"Multiplication of two values: "<<multiplication(a, b)<<endl;
 //division
 cout<<"Division of two values: "<<division(a, b)<<endl; 



    return 0;
}
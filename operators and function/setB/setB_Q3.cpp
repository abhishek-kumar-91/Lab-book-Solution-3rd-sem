#include<iostream>
#include<iomanip>
using namespace std;


float pI = 3.14;

float areaOfCircle(float radius = 5){

  return( pI * radius * radius);
}


float circumferenceOfCircle(float radius = 2){
  return (2 * pI * radius);
}
int main(){


float radius;
cout<<"Enter radius of circle: ";
cin>>radius;

cout<<"with value: "<<endl;
cout<<setprecision(3);

cout<<"Area of circle: "<<areaOfCircle(radius)<<endl;
cout<<"Circumference of circle: "<<circumferenceOfCircle(radius)<<endl;

cout<<"Default value: "<<endl;
cout<<"Area of circle: "<<areaOfCircle()<<endl;
cout<<"Circumference of circle: "<<circumferenceOfCircle()<<endl;


return 0;
}
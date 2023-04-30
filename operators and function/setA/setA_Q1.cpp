#include<iostream>
using namespace std;

inline int rectangleOfArea(int length, int width){
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;

    return (length * width );
}

int main(){


int length;
int width;

cout<<"Enter length: ";
cin>>length;
cout<<"Enter width: ";
cin>>width;

cout<<"Rectangle of area: "<<rectangleOfArea(length, width)<<endl;


    return 0;
}
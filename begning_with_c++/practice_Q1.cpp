#include<iostream>
using namespace std;

//factorial number 5! 5*4*3*2*1

int main () {
    int num;
    int result = 1;
    

    cout<<"Enter the number:: ";
    cin>>num;


    if(num < 0) {
        cout<<"Please enter the correct value: ";
    }else{
        for(int i = 1; i <= num; i++){
            result *= i;
        }

        cout<<"Factorial number is: "<<result<<endl;
    }


    return 0;
}
//reverse number

#include<iostream>
using namespace std;
int main() {
    int remainder;
    int result;

    int digits;
    cout<<"What your digits number: ";
    cin>>digits;

    int number;
    cout<<"Enter your number: ";
    cin>>number;


    for(int i = 0; i < digits; i++) {
            remainder = number % 10;
            result = remainder;
            number /= 10;
            cout<<result;
    }
    return 0;
}
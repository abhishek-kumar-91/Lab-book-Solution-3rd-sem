#include<iostream>
using namespace std;

//fibonacci number  
int main () {

int n, step1 = 0, step2 = 1, nextStep;

cout<<"Enter the number: ";
cin>>n;
cout<<step1<<endl;
cout<<step2<<endl;
for(int i = 2; i < n; i++){
    
    nextStep = step1 + step2;

    cout<<nextStep<<endl;

    step1 = step2;
    step2 = nextStep;

}


    return 0;
}
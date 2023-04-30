#include<iostream>
using namespace std;



int main()
{
    
    int n;
    cout<<"Enter student number: ";
    cin>>n;

    float *percentage = new float[n];


    for(int i = 1; i <= n; i++){
        cout<<"Enter the percentage of each student: "<<i<<" : ";
        cin>>percentage[i];
    }


    cout<<"There are "<<n<<"student percentage "<<endl;

    for(int i = 1; i <= n; i++){
        cout<<"Student  "<<i<<" : "<<" Percentage "<<percentage[i]<<"%"<<endl;
    }
    
    delete [] percentage;

    return 0;

}
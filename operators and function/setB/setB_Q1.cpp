#include<iostream>
using namespace std;



int main(){
int n;
cout<<"Enter size of array: ";
cin>>n;



float *ptrArray = new float[n];

for(int i = 0; i < n; i++){
    cout<<"Enter element "<<"["<<i<<"] : ";
    cin>>ptrArray[i];
}

for(int i = 0; i < n; i+=2){
    
    cout<<"Alternate array element: "<<ptrArray[i]<<endl;
}

delete [] ptrArray;


    return 0;
}
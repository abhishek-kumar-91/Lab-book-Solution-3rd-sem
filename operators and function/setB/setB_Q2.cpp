#include<iostream>
using namespace std;


int main(){
int n;
cout<<"Enter array size: ";
cin>>n;

int arr[n];

int *prtarr = &arr[n];


for(int i = 0; i < n; i++){
    cout<<"Enter array element: ";
    cin>>arr[i];
}

for(int i = 0; i < n; i++ ){
    cout<<"array elements: "<<arr[i]<<" : "<<" array elements address: "<<&arr[i]<<endl;
}


    return 0;
}
#include<iostream>
using namespace std;

int main(){
int sum = 0;
int n;
cout<<"Enter the number: ";
cin>>n;

for(int i = 0; i <= n; i++){
    sum += (i * i);
}
cout<<"total: "<<sum<<endl;

    return 0;
}
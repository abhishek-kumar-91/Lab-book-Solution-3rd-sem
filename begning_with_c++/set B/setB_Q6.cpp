#include<iostream>
using namespace std;

int factorial (int n){
    int store = 1;
    for(int i = 1; i <= n; i++){
         store = store * i;
    }
   
    return store;
}

int main()
{
int n;
cout<<"Enter the n value: ";
cin>>n;

int ans = 0;
for(int i = 1; i <= n; i++){
        ans += (i / factorial(i));
}

cout<<ans;

    return 0;
}
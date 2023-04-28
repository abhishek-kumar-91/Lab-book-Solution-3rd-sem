#include<iostream>
using namespace std;

int main(){
 char letter = 'A';
 int prints;
cout<<"Enter the value to print: ";
cin>>prints;

 for(int i = 0; i <= prints; i++){
    for(int j = 0; j < i; j++){
        cout<<" "<<letter++<<" ";
    }
    cout<<endl;
 }
    return 0;
}
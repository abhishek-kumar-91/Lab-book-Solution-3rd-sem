#include<iostream>
using namespace std;
//decimal to binary
int main()
{ 
    int result = 0;
    int n;
    cout<<"Enter decimal number: ";
    cin>>n;
    int final = 0;
    int power = 1;

while(n != 0){
    result = n % 2;
    final += result * power;
    power *= 10; 
    n = n / 2;    
}
 cout<<final;

}

//binary to decimal

/*
#include<iostream>
using namespace std;

int main()
{ 
    int result = 0;
    int n;
    cout<<"Enter decimal number: ";
    cin>>n;
    int final = 0;
    int power = 1;

while(n != 0){
    result = n % 2;
    final += result * power;
    power *= 2; 
    n = n / 10;    
}
 cout<<final;

}
*/
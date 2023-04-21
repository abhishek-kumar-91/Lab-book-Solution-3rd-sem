#include<iostream>
using namespace std;


//perfect number
int main() {

  int num;
    int sum = 0;
  cout<<"Enter the number: ";
  cin>>num;


  for(int i = 1; i <= num; i++){
    if(num % i == 0){
        sum += i;
    }else if (sum == num){
        cout<<"perfect number: "<<num<<endl;
    }

  }
  cout<<"plese enter the correct number!!";

    return 0;
}
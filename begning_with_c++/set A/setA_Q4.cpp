
//armstrong number between twointervals

#include<iostream>
using namespace std;

int main() {

   

    int f_interval;
    cout<<"Enter your first interval: ";
    cin>>f_interval;

    int s_interval;
    cout<<"Enter your second interval: ";
    cin>>s_interval;


    for(int i = f_interval; i < s_interval; i++) {
            int temp = i;
            int result = 0;
             int remainder;
            while(temp > 0){
          
                remainder = temp % 10;
                result += remainder * remainder * remainder;
                temp /= 10;


            }
           if(result == i){
            cout<<i<<endl;
           } 
    }


    return 0;
}





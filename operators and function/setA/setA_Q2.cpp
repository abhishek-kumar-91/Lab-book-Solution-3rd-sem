#include<iostream>
using namespace std;



int powerFunction (int x, int y = 2){
    int power = 1;
   for(int i = 1; i <= y ; i++){
     power *= (x) ;
   }

   cout<<"Value of x ^ y: "<<power<<endl;
}

int main(){
int x;
cout<<"Enter X value: ";
cin>>x;


int y;
cout<<"Enter Y value: ";
cin>>y;

powerFunction(x, y);


    return 0;
}
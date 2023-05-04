#include<iostream>
using namespace std;

class Min;
class Max{
    int maxNumber;
    int minNumber;


    public:

    void setData(){
        cout<<"Enter maximum number: ";
        cin>>maxNumber;
        cout<<"Enter minimum number: ";
        cin>>minNumber;
    }

    void getData(){
        cout<<"Max Number: "<<maxNumber<<endl;
        cout<<"Min Number: "<<minNumber<<endl;
    }

   friend void maxMin(Min, Max);
};

class Min{
    int maxNumber1;
    int minNumber1;

    public:
    void setData(){
        cout<<"Enter maximum number 1: ";
        cin>>maxNumber1;
        cout<<"Enter minimum number1: ";
        cin>>minNumber1;
    }

    void getData(){
        cout<<"Max Number1: "<<maxNumber1<<endl;
        cout<<"Min Number1: "<<minNumber1<<endl;
    }

    friend void maxMin(Min, Max);
};


void maxMin(Min mm, Max nn){
    cout<<"Two classes maximum: "<<mm.maxNumber1 + nn.maxNumber<<endl;
    cout<<"Two classes minimum: "<<mm.minNumber1 + nn.minNumber<<endl;
}


int main(){

Max m1;
m1.setData();
m1.getData();


Min n1;
n1.setData();
n1.getData();


maxMin(n1, m1);



    return 0;
}
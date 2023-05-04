#include<iostream>
using namespace std;
class B;
class A{
    float a;

    public:
    void getData(){
      cout<<"Enter a data: ";
      cin>>a;
    }
    void displayData(){
        cout<<"class a data: "<<a<<endl;
    }
    friend float addition(A , B);
};

class B{
    float b;
    public:
    void getData(){
       cout<<"Enter b data: ";
       cin>>b;
    }
    void display(){
        cout<<"Class b data: "<<endl;
    }

    friend float addition(A , B);
};

float addition ( A ob1, B ob2){
    cout<<"Addition of two different class data member using friend funciton: "<<ob1.a + ob2.b<<endl;
}

int main(){

    A a1;
    B b1;
    a1.getData();
    a1.displayData();
    b1.getData();
    b1.display();

    addition(a1, b1);


    return 0;
}
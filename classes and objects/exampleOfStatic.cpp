#include<iostream>
using namespace std;

class StaticDemo {
    static int x;

    public:
     void display(){
        cout<<"Static value of x: "<<x<<endl;
    }
};

int StaticDemo::x = 20;

int main(){

    StaticDemo::display();
     StaticDemo s;
     s.display();


    return 0;
}
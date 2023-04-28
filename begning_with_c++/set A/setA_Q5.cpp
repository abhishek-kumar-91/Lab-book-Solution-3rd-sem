#include<iostream>
using namespace std;

int main()
{
    char operators;
    int a , b;
    cout<<"Enter the a  value: ";
    cin>>a;

    cout<<"Enter the b value: ";
    cin>>b;

    cout<<"Enter the operators like + - * / ";
    cin>>operators;

    switch(operators){
        case '+':
                    cout<<"---------Addition---------------------"<<endl;
                    cout<<a<<" "<<" + "<<b<<" "<<" = "<<a+b<<endl;
                    break;
        case '-':
                    cout<<"--------Substraction------------------"<<endl;
                    cout<<a<<" "<<" - "<<b<<" "<<" = "<<a-b<<endl;
                    break;
        case '*':
                    cout<<"------------Multiplication---------------"<<endl;
                    cout<<a<<" "<<" * "<<b<<" "<<" = "<<a*b<<endl;
                    break;
        case '/':
                    cout<<"--------------Division----------------------"<<endl;
                    cout<<a<<" "<<" / "<<b<<" "<<" = "<<a/b<<endl;
                    break;
        default:
                    cout<<"please select the correct operators! "<<endl;

    }

    return 0;
}
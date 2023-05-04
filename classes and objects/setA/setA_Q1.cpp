#include<iostream>
#include<string>
using namespace std;


class Student{
    int rollNo;
    string name;
    string student_class;
    static int count;

    public:
            void setData(){
                cout<<"Enter roll no: ";
                cin>>rollNo;
                cout<<"Enter name: ";
                cin>>name;
                cout<<"Enter class: ";
                cin>>student_class;
                count++;
            }

            void getData(){
                cout<<"Student Roll No: "<<rollNo<<endl;
                cout<<"Student Name: "<<name<<endl;
                cout<<"Student class: "<<student_class<<endl;
            }

            static void counts(){
                cout<<"Student no: "<<count<<endl;
            }
};
int Student::count = 1;

int main(){

Student s1, s2, s3;


Student::counts();
s1.setData();
s1.getData();

Student::counts();
s2.setData();
s2.getData();

Student::counts();
s3.setData();
s3.getData();



    return 0;
}
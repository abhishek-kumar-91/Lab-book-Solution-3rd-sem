#include<iostream>
using namespace std;

class Student{

    int height;
    static int sumStudent;
    

    public:
    void setHeight(){
        cout<<"Enter height of student: ";
        cin>>height;
        sumStudent += height;
        
    }

    void getHeight(){
        cout<<"Student Height: "<<height<<endl;
    }

    static void averages(int n){
        int result = sumStudent / n;
        cout<<result;
    }
};

int Student::sumStudent;



int main(){

int n;
cout<<"Enter student no: ";
cin>>n;

Student s[n];


for(int i = 0; i < n; i++){
     s[i].setHeight() ;
}

for(int i = 0; i < n; i++){
    s[i].getHeight();

}

Student::averages(n);







    return 0;
}






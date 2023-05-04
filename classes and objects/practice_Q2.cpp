#include<iostream>
#include<string>
using namespace std;

class Employee{
    int empId;
    string empName;
    string empDept;
    int dateOfJoining;
    int salary;

    public:
    void getData(){
        cout<<"Enter employee ID: ";
        cin>>empId;
        cout<<"Enter employee name: ";
        cin>>empName;
        cout<<"Enter employee department: ";
        cin>>empDept;
        cout<<"Enter employee date of joining: ";
        cin>>dateOfJoining;
        cout<<"Enter employee salary: ";
        cin>>salary;
    }

    void displayData(){
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"Employee Department: "<<empDept<<endl;
        cout<<"Employee Date Of Joining: "<<dateOfJoining<<endl;
        cout<<"Employee salary: "<<salary<<endl;
    }
};

int main(){

int n;
cout<<"Enter the size of array objects: ";
cin>>n;

Employee e[n];



for(int i = 0; i < n; i++){
e[i].getData();
cout<<i<<"Employee data is collected";
}

for(int i = 0; i < n; i++){
    
    e[i].displayData();
}



    return 0;
}

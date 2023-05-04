#include<iostream>
#include<string>
using namespace std;

class Product{
   static int productId;
    string productName;

    public:
    int productPrice;
    void setData(){
        cout<<"product ID: "<<productId<<endl;
        cout<<"Enter product name: ";
        cin>>productName;
        cout<<"Enter product price: ";
        cin>>productPrice;
        productId++;

    }

    void getData(){
        cout<<"Product ID: "<<productId<<endl;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Product Price: "<<productPrice<<endl;
    }
    
    


};

int Product::productId = 1;

int main(){

int n;
cout<<"Enter product n: ";
cin>>n;




Product *ptrp = new Product[n];




for(int i = 0; i < n; i++){
    ptrp[i].setData();
}

for(int i = 0; i < n; i++){
    ptrp[i].getData();
}

int maxIndex = 0;
for(int i = 0; i < n; i++){
    if(ptrp[i].productPrice >  ptrp[maxIndex].productPrice){
        maxIndex = i;
    }
}

cout<<"Max price: "<<maxIndex<<endl;

    return 0;
}
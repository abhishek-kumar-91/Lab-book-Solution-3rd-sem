#include<iostream>
#include<string>
using namespace std;


int main(){

    string *title = new string;
    cout<<"Enter title: ";
    cin>>*title;

    string *author = new string;
    cout<<"Enter author: ";
    cin>>*author;

    int *price = new int;
    cout<<"Enter price: ";
    cin>>*price;

    string *publisher = new string;
    cout<<"Enter publisher name: ";
    cin>>*publisher;

    int *stock = new int;
    cout<<"Enter stock: ";
    cin>>*stock;
    

    if(*stock <= 0){
        int purchase;
        cout<<"Purchase the book: ";
        cin>>purchase;
        int totalPurchasePrice = purchase * (*price);

        *stock = purchase;
        cout<<"Total purchase price: "<<totalPurchasePrice<<endl;
        cout<<"Stock: "<<*stock<<endl;
    }else{
        cout<<"Enter the correct purchase book details!"<<endl;
    }



    if (*stock > 0){
        int sale;
        cout<<"Stock is available: "<<*stock<<endl;
        cout<<"sale book: ";
        cin>>sale;

        *stock -= sale;
        int totatSalePrice = sale * (*price);
        cout<<"Total sale price: "<<totatSalePrice<<endl;
        cout<<"Stock: "<<*stock<<endl;
    }else{
        cout<<"Enter the correct sale details!"<<endl;
    }



    delete title;
    delete author;
    delete price;
    delete publisher;
    delete stock;


    return 0;
}
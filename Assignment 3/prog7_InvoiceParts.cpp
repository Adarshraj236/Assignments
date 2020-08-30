#include<iostream>
#include"Invoice.h"
using namespace std;

int main(){
    Invoice I1;
    cout<<"\nPart Number : "<<I1.getPartNo()<<endl;
    cout<<"Part Discription : "<<I1.getDiscription()<<endl;
    cout<<"Quantity of Product : "<<I1.getQuantity()<<endl;
    cout<<"Price of Product : "<<I1.getPrice()<<endl;
    cout<<"\nTotal Amount : "<<I1.getInvoiceAmount();
    return 0;
}

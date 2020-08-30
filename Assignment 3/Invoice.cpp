#include<iostream>
#include"Invoice.h"
using namespace std;

    Invoice::Invoice(){
        cout<<"Enter Part Number : ";
        setPartNo();
        cout<<"Enter Part Discription : ";
        setDiscription();
        cout<<"Enter Quantity of Product : ";
        setQuantity();
        cout<<"Enter Price of Product : ";
        setPrice();
    }
    void Invoice::setPartNo(){
        getline(cin,ptno);
    }
    void Invoice::setDiscription(){
        getline(cin,dis);
    }
    void Invoice::setQuantity(){
        cin>>quantity;
    }
    void Invoice::setPrice(){
        cin>>price;
    }
    string Invoice::getPartNo(){
        return ptno;
    }
    string Invoice:: getDiscription(){
        return dis;
    }
    int Invoice::getQuantity(){
        return quantity;
    }
    int Invoice::getPrice(){
        return price;
    }
    int Invoice::getInvoiceAmount(){
        return quantity*price ;
    }

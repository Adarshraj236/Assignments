#include<iostream>
using namespace std;
class Invoice
{
    private:
    string ptno,dis;
    int quantity,price;
    public:
    Invoice(){
        cout<<"Enter Part Number : ";
        setPartNo();
        cout<<"Enter Part Discription : ";
        setDiscription();
        cout<<"Enter Quantity of Product : ";
        setQuantity();
        cout<<"Enter Price of Product : ";
        setPrice();
    }
    void setPartNo(){
        getline(cin,ptno);
    }
    void setDiscription(){
        getline(cin,dis);
    }
    void setQuantity(){
        cin>>quantity;
    }
    void setPrice(){
        cin>>price;
    }
    string getPartNo(){
        return ptno;
    }
    string getDiscription(){
        return dis;
    }
    int getQuantity(){
        return quantity;
    }
    int getPrice(){
        return price;
    }
    int getInvoiceAmount(){
        return quantity*price ;
    }
};
int main(){
    Invoice I1;
    cout<<"\nPart Number : "<<I1.getPartNo()<<endl;
    cout<<"Part Discription : "<<I1.getDiscription()<<endl;
    cout<<"Quantity of Product : "<<I1.getQuantity()<<endl;
    cout<<"Price of Product : "<<I1.getPrice()<<endl;
    cout<<"\nTotal Amount : "<<I1.getInvoiceAmount();
}

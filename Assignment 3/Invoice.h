#include<iostream>
using namespace std;
class Invoice
{
    private:
    string ptno,dis;
    int quantity,price;
    public:
    Invoice();
    void setPartNo();
    void setDiscription();
    void setQuantity();
    void setPrice();
    string getPartNo();
    string getDiscription();
    int getQuantity();
    int getPrice();
    int getInvoiceAmount();
};
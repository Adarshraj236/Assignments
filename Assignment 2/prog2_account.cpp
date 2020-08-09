#include<iostream>
#include<string>
using namespace std;

class Account
{
    private:
        int balance1;
    public:
        Account(int){
            
            cin>>balance1;

        }
        
        int getBalance(int)
        {
            if(balance1>=0)
            {
                return balance1;
            }
            else
            {
                cout<<" Invalid Balance\n";
                balance1=0;
                return balance1;
            }
        }

        int Credit(int)
        {
            int b;
            cout<<"Inter the Amount you want to Credit = ";
            cin>>b;
            balance1=balance1+b;
            return balance1; 
        }
         int Debit(int)
         {
            int b;
            cout<<"Inter the Ammount you want to Debit =";
            cin>>b;
            if(balance1>=b){
                balance1=balance1-b;
            }
            else
            {
                cout<<"Debit Amount exceeded Account Balance\n";
            }
            return balance1;
         }
};

int main()
{
    int balance1;
    cout<<"\nInter the Balance of Account 1 = ";
    Account account1(balance1);
    cout<<"Account 1 Initial Balance  = "<<account1.getBalance(balance1)<<endl;
    cout<<"\nCredit Money in Account 1.\n";
    cout<<"New Balance in the Account 1 = "<<account1.Credit(balance1)<<endl;
    cout<<"\nDebit Money from Account 1.\n";
    cout<<"New Balance in Account 1 = "<<account1.Debit(balance1)<<endl;
    cout<<"\nCurrent Balance in Account 1 = "<<account1.getBalance(balance1)<<endl;

    cout<<"\nInter the Balance of Account 2 = ";
    Account account2(balance1);
    cout<<"\nAccount 2 Initial Balance  = "<<account2.getBalance(balance1)<<endl;
    cout<<"\nCredit Money in Account 2.\n";
    cout<<"New Balance in the Account 2 = "<<account2.Credit(balance1)<<endl;
    cout<<"\nDebit Money from Account 2.\n";
    cout<<"New Balance in Account 2 = "<<account2.Debit(balance1)<<endl;
    cout<<"\nCurrent Balance in Account 2 = "<<account2.getBalance(balance1)<<endl;
}
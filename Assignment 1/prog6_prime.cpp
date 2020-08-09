//Check whether a number is prime or not.

#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            cout<<n <<" is not a prime number";
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<n << " is a prime number";
}
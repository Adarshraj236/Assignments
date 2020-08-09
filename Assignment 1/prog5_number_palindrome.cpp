// check whether a number is palindrome or not.

#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Number is not palidrome\n";
    }
    else
    {
        cout <<"Number is palindrome\n";
    }
    return 0;


}
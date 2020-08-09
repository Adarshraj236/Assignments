//Find ot whether a string is palindrome or not.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int i,n,flag = 0;

    cout<<"Enter the string\n";
    cin>>a;
    n=strlen(a);

    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<< a <<" is not palidrome\n";
    }
    else
    {
        cout<< a <<" is palindrome\n";
    }
    return 0;
}
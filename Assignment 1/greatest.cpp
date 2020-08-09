// To find gretest of the three numbers


#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input the three number\n";
    cin >> a >> b >> c;
    if(a>b && a>c)
    {
        cout<< a <<" is the largest number";
    }
    if(b>a && b>c)
    {
        cout<< b <<" is the largest number";
    }
    else
    {
        cout<< c <<" is the largest number";
    }
    return 0;
}
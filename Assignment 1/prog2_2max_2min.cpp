//To find 2nd max and 2nd min number from an integer array.

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp=0;
    cout<<"Enter the size of the array\n";
    cin>>n;
    if(n<=2)
    {
        cout<<"Invalid Input";
        return 0;
    }
    int a[n];
    cout<<"Enter the array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Second min number is " << a[1]<<endl;
    cout<<"Second max number is "<< a[n-2]<<endl;
    return 0;
}
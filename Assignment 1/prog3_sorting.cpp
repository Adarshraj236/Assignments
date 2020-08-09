//Sort an array os integer using insertion sorting.

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter the size of the array\n";
    cin>>n;

    int a[n];
    cout<<"Enter the array\n";
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
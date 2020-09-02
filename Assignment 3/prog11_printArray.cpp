#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int *arr,int first,int last){
if(first==last)
    exit;
if(first!=last)
    cout<<arr[first]<<endl;
if(first<last)
    return printArray(arr,first+1,last);
}
int main(){
int n;
cout<<"Size of array : ";
cin>>n;
int arr[n];
cout<<"Enter the array : \n";
for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<endl;
printArray(arr,0,n);
return 0;
}

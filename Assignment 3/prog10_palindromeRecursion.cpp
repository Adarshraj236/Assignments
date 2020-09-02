#include<iostream>
#include<string>
using namespace std;
bool Palindrome(string str,int first=0,int last=0){
    if(first==last || str.size()==0)
        return true;
    if(str[first]!=str[last])
        return false;
    if(first<last+1)
        return Palindrome(str,first+1,last-1);
}

int main(){
string str;
cout<<"Enter the string:";
getline(cin,str);
if(Palindrome(str,0,str.size()-1))
    cout<<"It is a Palindrome.\n";
else cout<<"It is not a Palindrome.\n";
return 0;
}

#include<iostream>
using namespace std;
class Complex
{
    private:
    int real, img;

    public:
    friend istream & operator >> (istream &in, Complex &obj);
    friend ostream & operator << (ostream &out, Complex &obj);
    Complex(int x=0,int y=0){
        real=x;
        img=y;
    }
};
istream & operator >> (istream &in, Complex &obj){
    cout<<"Enter the real Part = ";
    in >> obj.real;
    cout<<"Enter the imaginary Part= ";
    in >> obj.img;
}
    ostream & operator << (ostream &out, Complex &obj){
        out << obj.real;
        out <<" + "<< obj.img<<"i"<<endl;
        return out;
    }


int main(){
    Complex cp;
    cin >> cp;
    cout<<"Complex Number = ";
    cout << cp;
    return 0;
}
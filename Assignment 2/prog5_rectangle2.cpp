#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Rectangle
{
    private:
    float length,width;
    int a,b,c,d,p,q,r,s;
    public:
    Rectangle(int,int,int,int,int,int,int,int)
    {
        cout<<"Enter the First Coordinates "<<endl;
        cin>>a>>b;
        cout<<"Enter the Second Coordinates "<<endl;
        cin>>c>>d; 
        cout<<"Enter the Third Coordinates "<<endl;
        cin>>p>>q;
        cout<<"Enter the Fourth Coordinates "<<endl;
        cin>>r>>s;
        setCoordinates();
    }
    void setCoordinates(){

        cout<<"Coordinates are:"<<endl;
        cout<<"("<<a <<","<<b<<")"<<" "<<"("<<c <<","<<d<<")"<<" "<<"("<<p <<","<<q<<")"<<" "<<"("<<r <<","<<s<<")"<<endl;
        if(a>=0 && b>=0 && c>=0 && d>=0 && p>=0 && q>=0 && r>=0 && s>=0){
            cout<<"Entered coordinates are in First Quadrent"<<endl;
        }
        else{
            cout<<"Entered coordinates are not in First Quadrent"<<endl;
        }
        if(a<=20 && b<=20 && c<=20 && d<=20 && p<=20 && q<=20 && r<=20 && s<=20){
            cout<<"All Coordinates are Less than 20"<<endl;
        }
        else{
            cout<<"All Coordinates are not Less than 20"<<endl;
        }
    }
    void Length()
    {
        this->length=sqrt((c-a)*(c-a)+(d-b)*(d-b));
        cout<<"Length = "<<length<<endl;
    }
    void Width()
    {
        this->width=sqrt((r-p)*(r-p)+(s-q)*(s-q));
        cout<<"Width = "<<width<<endl;
    }
    void Perimeter(){
        cout<<"Perimeter = "<<2*(length+width)<<endl;
    }
    void Area(){
        cout<<"Area = "<<length*width<<endl;
    }
    void predicate(){
        if(length==width){
            cout<<"Coordinates forms a Square";
        }
        else{
            cout<<"Coordinates forms a Rectangle";
        }
    }
};

int main()
{
    float length=0,width=0;
    int a,b,c,d,p,q,r,s;
    Rectangle r1(a,b,c,d,p,q,r,s);
    r1.Length();
    r1.Width();
    r1.Area();
    r1.Perimeter();
    r1.predicate();

    return 0;
}
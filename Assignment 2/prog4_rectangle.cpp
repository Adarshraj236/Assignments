#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
    private:
    float length,width;
    public:
    Rectangle()
    {
        length=1;
        width=1;
    }

    void setLength(float length){
        if(length>=0.0 && length<=20.0){
            this->length =length;
        }

    }
    void setWidth(float width){
        if(width>0.0 && width<=20.0){
            this->width=width;
        }
    }

    float getLength(){
        return length;
    }
    float getWidth(){
        return width;
    }

    float perimeter(){
        cout<<"Perimeter = "<<2*(getLength() + getWidth())<<endl;
    }
    float area(){
        cout<<"Area = "<<getLength()*getWidth()<<endl;
    }

};

int main()
{
    
    Rectangle r1;
    float l,w;
    cout<<"Enter the Length = ";
    cin>>l;
    cout<<"Enter the Width = ";
    cin>>w;
    r1.setLength(l);
    r1.setWidth(w);
    cout<<"Length = "<<r1.getLength()<<endl;
    cout<<"Width = "<<r1.getWidth()<<endl;
    r1.perimeter();
    r1.area();
    return 0;
}
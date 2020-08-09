#include<iostream>
#include<string>
using namespace std;

class Date
{
    private:
    int month,day,year;

    public:
    Date(int ,int ,int )
    {
        cout<<"Enter the Day = ";
        cin>>day;
        cout<<"\nEnter the Month = ";
        cin>>month;
        cout<<"\nEnter the Year = ";
        cin>>year;
    }

    void setDay(){
        this->day=day;
    }
    int getDay(){
        return day;
    }

    void setMonth(){
        if(month>=1 && month <=12){
            this->month = month;
        }
        else{
            month=1;
        }
    }
    int getMonth(){
        return month;
    }

    void setYear(){
        this->year=year;
    }
    int getYear(){
        return year;
    }

    int displayDate(){
        cout<<"Date is : ";
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
    int day,month,year;
    Date dt(day,month,year);
    dt.setDay();
    cout<<"Day No. is = "<<dt.getDay()<<endl;
    dt.setMonth();
    cout<<"Month No. is = "<<dt.getMonth()<<endl;
    dt.setYear();
    cout<<"Year No. is = "<<dt.getYear()<<endl;
    dt.displayDate();
}
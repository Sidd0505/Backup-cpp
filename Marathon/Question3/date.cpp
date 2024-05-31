#include "date.h"


Date::Date()                            //DEFAULT CONSTRUCTOR
{
    day=1;
    month=1;
    year=1;

}


Date::Date(int d, int m, int y)             //PARAMETERIZED CONSTRUCTOR
{
    if(d<=31&&d>1)
    {
        day=d;
    }
    if(m>1&&m<=12)
    {
        month=m;
    }
    if(y>0)
    {
        year=y;
    }

}

int Date::getday()                      //GETTER FUNCTION
{
    return day;
}


int Date::getmonth()                    //GETTER FUNCTION
{
    return month;
}


int Date::getyear()                 //GETTER FUNCTION
{
    return year;
}


void Date::accept()                 //ACCEPT OPERATION
{
    int d,m,y;

    std::cout<<"Enter month : ";
    std::cin>>m;

    if(m<=12 && m>0)
    {
        month=m;
    }
    std::cout<<"Enter day : ";
    std::cin>>d;
    if(month==2){
        if(d>0&&d<=28){
            day=d;
        }
    }
    else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)            //COUNTING DAYS OF MONTH
    {
        if(d>1 && d<=31){
            day=d;
        }
    }else{
        if(d>1 && d<=30){
            day=d;
        }
    }

    std::cout<<"Enter Year : ";
    std::cin>>year;

}

void Date::display()
{
    std::cout<<"\nDay : "<<day;
    std::cout<<"\nMonth : "<<month;
    std::cout<<"\nYear : "<<year;
}


void operator<<(std::ostream &print, Date &d)                   //OVERLOADING THE << OPERTOR
{

    print<<"\nDay : "<<d.day;
    print<<"\nMonth : "<<d.month;
    print<<"\nYear : "<<d.year;

}
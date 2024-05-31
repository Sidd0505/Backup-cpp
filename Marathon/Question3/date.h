#ifndef DATE_H
#define DATE_H
#include<iostream>
class Date{

    int day; 
    int month; 
    int year; 

    public:

    Date();
    Date(int ,int ,int );
    int getday();
    int getmonth();
    int getyear();
    void accept();
    void display();
    friend void operator<<(std::ostream&,Date&);
};
#endif // DATE_H
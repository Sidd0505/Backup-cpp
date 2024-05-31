#ifndef HEADER_H
#define HEADER_H

#include<iostream>

class Customer
{
    char* pointer;
    public:
    Customer();
    void accept();
    int getname();
    void set_x(float);
    friend std::ostream& operator<<(std::ostream&, Customer);

};


class Date:public Customer
{
    int day,month,year;
    
};
#endif // HEADER_H

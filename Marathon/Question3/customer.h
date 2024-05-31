#ifndef HEADER_H
#define HEADER_H
#include<iostream>

class Customer{
    char* customername;

    public:
    Customer();
    Customer(char*);
    Customer(Customer&);
    char* getname();
    void setname();
    friend void operator<<(std::ostream&,Customer&);
    void accept();
    void display();
    ~Customer();


};

#endif // HEADER_H
#ifndef BILL_H
#define BILL_H
#include"customer.h"
#include"date.h"

class Bill{
    int billnumber;
    Customer customerinfo;
    Date bill_date;
    int billamount;

    public:
    Bill();
    int getBillnum();
    int getBillamm();
    void display();
    void accept();
    Customer getCustomerinfo()  
    { 
    return customerinfo;
    }
    void setCustomerinfo(const Customer &customerinfo_)
   { 
    customerinfo = customerinfo_; 
   }
    friend void operator<<(std::ostream &print,Bill &b);


};
#endif // BILL_H
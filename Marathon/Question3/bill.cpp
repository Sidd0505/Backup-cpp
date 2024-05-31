#include<iostream>
#include "bill.h"

Bill::Bill()
{
    billnumber=0;
    bill_date; 
    customerinfo;
    billamount=0; 
}


int Bill::getBillnum()
{
    return billnumber;                  //Returning the bill number
}


int Bill::getBillamm()
{
    return billamount;
}


void Bill::display()                        //DISPLAY OPERATION
{
    std::cout<<"\nBill number : "<<billnumber;
    customerinfo.display();
    bill_date.display();
    std::cout<<"\nBill ammount : "<<billamount;
}



void Bill::accept()                 //ACCEPT OPERATION
{
    std::cout<<"Bill number : ";
    std::cin>>billnumber;
    customerinfo.accept();
    bill_date.accept();
    std::cout<<"Bill amount : ";
    std::cin>>billamount;

}


void operator<<(std::ostream &print, Bill &b)           //OVERLOADING << OPERATOR
{  
    print<<"\nBill number : "<<b.billnumber;
    print<<b.customerinfo;
    print<<b.bill_date;
    print<<"\nBill amount : "<<b.billamount;  
}
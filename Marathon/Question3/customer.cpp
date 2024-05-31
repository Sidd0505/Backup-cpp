#include "customer.h"
#include<cstring>


Customer::Customer()                                //DEFAULT CONSTRUCTOR
{
    customername=new char[50];
    strcpy(customername,"EMPTY");
}



Customer::Customer(char *newname)                    //PARAMETERIZED CONSTRUCTOR
{   
    customername=new char[strlen(newname)+1];
    strcpy(customername,newname);
}



Customer::Customer(Customer &b)                 //COPY CONSTRUCTOR
{
    char temp[50];
    strcpy(temp,b.customername);
    this->customername=new char[strlen(temp)+1];
    strcpy(this->customername,temp);
}

char* Customer::getname()                       //GETTER METHOD
{
    return customername;
}



void Customer::setname()                        //SETTER METHOD
{
    std::cout<<"\nSet name : ";
    std::cin>>customername;
}

void Customer::accept()                     //CODE OF ACCEPT
{
    std::cout<<"Enter Customer name : ";
    std::cin>>customername;
}

void Customer::display()                    //DISPLAY CODE
{
    std::cout<<"Customer name : "<<customername;
}


Customer::~Customer()                       //DEFAULT DESTRUCTOR
{
    delete customername;
}


void operator<<(std::ostream &print, Customer &c)           //OVERLOADING THE << OPERATOR
{
    print<<"\nCustomer name : "<<c.customername;
}
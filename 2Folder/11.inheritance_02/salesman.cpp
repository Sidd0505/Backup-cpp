#include<iostream>
#include"salesman.h"

Salesperson::Salesperson(){
    std::cout<<"Salesperson Default Constructor Called\n";
    salesamount=100000;
    commrate=0.5;
}

Salesperson::Salesperson(int id, std::string nam, double bas, double samt, double comm):
Employee(id,nam,bas),salesamount(samt),commrate(comm){
    std::cout<<"Salesperson Parameterized Constructor Called\n";
}

void Salesperson::accept(){

}

void Salesperson::display()
{
    Employee::display();
    std::cout<<"Sales Amount : "<<salesamount
    <<"\nCommision    : "<<commrate
    <<std::endl;
}

double Salesperson::calNetSalary()
{
    return Employee::calNetSalary()+(salesamount*commrate);
}

double Salesperson::calculateCommission()           
{
    return (salesamount*commrate);
}

Salesperson::~Salesperson(){
    std::cout<<"Salesperson Destructor Called\n";
}

#include<iostream>
#include"manager.h"

Manager::Manager(){
    std::cout<<"Manager Default Constructor Called\n";
    incentive=100000;
    numberofsubordinates=10;
}

Manager::Manager(int id, std::string nam, double bas, double inc, int nos):
Employee(id,nam,bas),incentive(inc),numberofsubordinates(nos){
    std::cout<<"Manager Parameterized Constructor Called\n";
}

void Manager::accept(){

}

void Manager::display()
{
    Employee::display();
    std::cout<<"Incentive Amount  : "<<incentive
    <<"\nNumber of Subordinates: "<<numberofsubordinates
    <<std::endl;
}

double Manager::calNetSalary(){
    return 0;
}

double Manager::calculateCommission(){
    return 0;
}

Manager::~Manager(){
    std::cout<<"Manager Destructor Called\n";
}

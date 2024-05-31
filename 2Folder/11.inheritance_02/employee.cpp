#include<iostream>
#include"employee.h"

Employee::Employee(){
    std::cout<<"Employee Default Constructor Called\n";
    empid=100;
    empname="Nikko";
    basicsalary=20000;
    calculateAllowances();
}

Employee::Employee(int id, std::string nam, double bas){
    std::cout<<"Employee Parameterized Constructor Called\n";
    empid=id;
    empname=nam;
    basicsalary=bas;
    calculateAllowances();
}

void Employee::accept(){
    std::cout<<"Enter Employee ID  : ";
    std::cin>>empid;
    std::cout<<"Enter Employee Name: ";
    std::cin>>empname;
    std::cout<<"Enter Basic Salary : ";
    std::cin>>basicsalary;
}

void Employee::display(){
    std::cout<<"=====================\nEmployee Details\n====================="
    <<"\nEmployee ID  : "<<empid
    <<"\nEmployee Name: "<<empname
    <<"\nBasic Salary : "<<basicsalary
    <<std::endl;
}

double Employee::calNetSalary(){
    double net=0;
    net=basicsalary-pf-ptax-foodallow-hrallow;
    return net;
}

Employee::~Employee(){
    std::cout<<"Employee Destructor Called\n";
}
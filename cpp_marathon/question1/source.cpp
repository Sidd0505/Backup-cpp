#include<iostream>
#include"header.h"

// source.cpp
#include "header.h"
Electricity::Electricity()                                      //Default Constructor
{

}

  
Electricity::Electricity(int sl, long present, long previous)
    : sanctionLoad(sl), presentReading(present), previousReading(previous) {}   //parameterised constructor

// Getter and setter functions for Electricity class
int Electricity::getSanctionLoad()  {
    return sanctionLoad;
}

long Electricity::getPresentReading()  {
    return presentReading;
}

long Electricity::getPreviousReading()  {
    return previousReading;
}

void Electricity::setSanctionLoad(int sl) {
    sanctionLoad = sl;
}

void Electricity::setPresentReading(long present) {
    presentReading = present;
}

void Electricity::setPreviousReading(long previous) {
    previousReading = previous;
}

// Calculate electricity bill
double Electricity::calculateElectricityBill() {
    if (presentReading < previousReading) {
        std::cout<<"The previous electricity bill is exceeding the present electricity bill."<<std::endl;
        return 0.0; // Bill is zero if present reading is less than previous reading
    }

    long consumption = presentReading - previousReading;
    double billAmount = 0.0;

    if (sanctionLoad == 1) {
        billAmount = (sanctionLoad * E1) + (consumption * E1 / 100);
        return billAmount;
    } else if (sanctionLoad == 3) {
        billAmount = (sanctionLoad * E2) + (consumption * E2 / 100);
        return billAmount;
    } else if (sanctionLoad == 5) {
        billAmount = (sanctionLoad * E3) + (consumption * E3 / 100);
        return billAmount;
    }
    else if(sanctionLoad!=1 && sanctionLoad !=3 && sanctionLoad!=5)
        std::cout<<"Enter the correct sanctionload"<<std::endl;  
        return 0; 
}

void Electricity::accept()
{
    std::cout<<"Enter the previous reading of meter :";
    std::cin>>previousReading;
    std::cout<<"Enter the present reading of meter :";
    std::cin>>presentReading;
    std::cout<<"Enter the Sanctionload of meter :";
    std::cin>>sanctionLoad;
}

void Electricity::display()
{
    std::cout<<"\nDisplaying the Data Entered by user."<<std::endl;
    std::cout<<"The previous electricity bill is :"<<previousReading<<std::endl;
    std::cout<<"THe current electricity bill is :"<<presentReading<<std::endl;
    std::cout<<"THe sanction load is :"<<sanctionLoad<<std::endl;
    int d = calculateElectricityBill();
    std::cout<<"\nThe Electricity Bill is :"<<d<<std::endl;
}
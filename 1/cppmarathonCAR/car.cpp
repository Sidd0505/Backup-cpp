// #include <iostream>
#include<iostream>
#include"car.h"
#include"carcategory.h"

int Car::no = 2001;
BookVehicle::BookVehicle()
{
    cptr = new Car;
    // cptr->accept();
    // cptr->display();
}

BookVehicle::~BookVehicle()
{
    delete cptr;
}
Car::Car(){
    
}

Car::Car(int no,carCategory cc, int insuranceamt, int cp, int noseats, std::string vb)
{
    carNo = no;
    no++;
    vehicleBrand = vb;
    carCategory c= cc;
    insuaranceAmount = insuranceamt;
    carPrice = cp;
    numberOfSeats = noseats;
}

void Car::accept()
{
    std::cout << "\nEnter vehicle Brand:";
    std::cin >> vehicleBrand;
    std::cout << "Enter car Price:";
    std::cin >> carPrice;
    std::cout << "Enter number of Seats: ";
    std::cin >> numberOfSeats;
    std::cout << "Enter Insuarance Amount:";
    std::cin >> insuaranceAmount;
    // std::cout<<"\nEnter Car Category:";
    // std::cin>>cCategory;
}

char Car::display()
{
    std::cout << "\n\nvehicle Brand:" << vehicleBrand;
    std::cout << "\nCar Price:" << carPrice;
    std::cout << "\nNumber of Seats: " << numberOfSeats;
    std::cout << "\nInsuarance Amount" << insuaranceAmount;
    // std::cout<<"\nEnter Car Category:";
    // std::cin>>cCategory;
    return '\n';
}

void operator<<(std::ostream &os, Car &c)
{
    os << c.display();
}

float calculateAvg(Car inventory[], carCategory cCat)
{
    float sum = 0.0f, avg;
    for (int i = 0; i < 3; i++)
    {
        sum += inventory[i].getCarPrice();
    }
    avg = sum / 3;
    std::cout << "\nAverage: " << avg;
    return avg;
}
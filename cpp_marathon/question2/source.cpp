#include "header.h"
#include<iostream>

Flight::Flight()
{}


Flight::Flight(long int fno, float dist, float money)
{
    flightNumber =fno;
    distance = dist;
    fare = money;
}



void Flight::setFlightNumber(long int number) {
    flightNumber = number;
}

long int Flight::getFlightNumber(){ 
    return flightNumber; 
}


void Flight::display() const {
    std::cout << "Flight Number: " << flightNumber << std::endl;
    std::cout<<"The fuel required is :"<<fuel<<std::endl;
    std::cout << "Fare: " << fare << " Rs" << std::endl;
}


void feedinfo(long int flight_no,float dist)
{
    std::cout<<"Enter the Flight number : ";
    std::cin>>flight_no;
    std::cout<<"Enter the distance :";
    std::cin>>dist;
}

int Flight::calculatefuelquantity()
{
    if(distance<=1000)
        return 5000;
   else  if(distance>1000 && distance<=20000)
        return 11000;
   else  if(distance>20000 && distance<=30000)
        return 22000;
    else if(distance>30000)
        return 0;
}

#include"header.h"
#include<iostream>
using namespace std;

int Flight ::count =0;
long Flight::getFlightno()
{
    return flightNumber;
}
void Flight:: fuelamount(float fval)
{
    this->fuel = fval;
}
Flight::Flight()    //Constructor
{
    flightNumber = 0;
    distance = 0.0;
    fare = 0.0;
    count ++;
}
Flight::Flight(long fno,float dis,float fue,float far)  //Parameterised constructor
{
    flightNumber = fno;
    distance = dis;
    fuel = fue;
    fare = far;
    count ++;
}
void Flight:: calculateFuelQuantity()
{
    if(distance <= 10000)
    {
        fuel =5000;
        //fuelamount(5000);
    }    
    else if(distance>10000 && distance <=20000)
    {   
        fuel =11000;
       //fuelamount(11000);
    }    
    else if(distance >20000 && distance <=30000)
    {   
        fuel =22000;
         //fuelamount(22000);  
    }   
    else 
    {
         fuel=30000;

    }
       
    

}
void Flight:: FeedInfo()
{   
    count++;
    std::cout<<"Enter the flight number\n";
    std::cin>>flightNumber;
    std::cout<<"enter the distance\n";
    std::cin>>distance;
    std::cout<<"Fare amount";
    std::cin>>fare;
    calculateFuelQuantity();
}   
void Flight:: showInfo()
{
    std::cout<<"The Flight number is -> "<<flightNumber<<std::endl;
    std::cout<<"The distance to traival is -> "<<distance<<std::endl;
    std::cout<<"The fuel required  is -> "<<fuel<<std::endl;
    std::cout<<"The fare amount is ->"<<fare<<std::endl;
}
int Flight:: CalculateTotalFightObject()
{
    return count;
}

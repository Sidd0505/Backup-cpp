#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
 
class Flight {
private:
    long int flightNumber;
    float distance;
    float fuel;
    float fare;

public:
    // Default constructor
    Flight();
    Flight(long int, float, float);

    // Setters and getters for class members
    void setFlightNumber(long int number);
    long int getFlightNumber(); 
    int calculatefuelquantity();
    void feedinfo();
    static int calculateTotalFlightObjects(int);
    // Display flight details
    void display() const;
};

#endif
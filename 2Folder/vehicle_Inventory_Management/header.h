// header.h
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

// Enum to represent car categories
enum CarCategory {
    SUV,
    HatchBack,
    Sedan
};

class Car {
private:
    std::string chassisNumber;
    std::string vehicleBrand;
    double price;
    int numberOfSeats;
    double tax;
    double insurance;
    CarCategory category;

public:
      // Constructor and other member functions as before...

    // Accessor functions for category and price
    CarCategory getCategory() const {
        return category;
    }

    double getPrice() const {
        return price;
    }
    // Constructor
    Car();
    void accept();
    Car(std::string chassis, std::string brand, double price, int seats, double tax, double insurance, CarCategory cat);

    
    // Display car details
    void display() const;

    // Overload << operator to display car details
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};


class BookVehicle {
private:
    Car* car;

public:
    // Default constructor
    BookVehicle();

    // Destructor
    ~BookVehicle();

    // Overload -> operator to access Car class members
    Car* operator->();

    // Overload * operator to access Car object
    Car& operator*();

    // Function to create a new car booking
    void createBooking(Car* newCar);
}; 

#endif 
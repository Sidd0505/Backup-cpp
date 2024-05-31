// source.cpp
#include "header.h"

// Car class constructor
Car::Car(){

}
Car::Car(std::string chassis, std::string brand, double price, int seats, double tax, double insurance, CarCategory cat)
    : chassisNumber(chassis), vehicleBrand(brand), price(price), numberOfSeats(seats), tax(tax), insurance(insurance), category(cat) {}

// Display car details
void Car::accept(){
    std::cout << "Chassis Number: " ;
    std::cin>>chassisNumber;
    std::cout << "Brand: " ;
    std::cin>>vehicleBrand;

    std::cout << "Price: $" ;
    std::cin>>price;
    std::cout << "Number of Seats: " ;
    std::cin>>numberOfSeats;
    std::cout << "Tax: $" ;
    std::cin>>tax;
    std::cout << "Insurance: $" ;
    std::cin>>insurance;
    std::cout << "Category: ";
    int categoryChoice;
    std::cout << "Select Category (0: suv, 1: hatchback, 2: sedan): ";
    std::cin >> categoryChoice;
    category = static_cast<CarCategory>(categoryChoice);   

}
void Car::display() const {
    std::cout << "Chassis Number: " << chassisNumber << std::endl;
    std::cout << "Brand: " << vehicleBrand << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Number of Seats: " << numberOfSeats << std::endl;
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "Insurance: $" << insurance << std::endl;
    std::cout << "Category: ";
    switch (category) {
        case SUV:
            std::cout << "SUV";
            break;
        case HatchBack:
            std::cout << "HatchBack";
            break;
        case Sedan:
            std::cout << "Sedan";
            break;
    }
    std::cout << std::endl;
}

// Overload << operator to display car details
std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "Chassis Number: " << car.chassisNumber << std::endl;
    os << "Brand: " << car.vehicleBrand << std::endl;
    os << "Price: $" << car.price << std::endl;
    os << "Number of Seats: " << car.numberOfSeats << std::endl;
    os << "Tax: $" << car.tax << std::endl;
    os << "Insurance: $" << car.insurance << std::endl;
    os << "Category: ";
    switch (car.category) {
        case SUV:
            os << "SUV";
            break;
        case HatchBack:
            os << "HatchBack";
            break;
        case Sedan:
            os << "Sedan";
            break;
    }
    os << std::endl;
    return os;
}

// Default constructor for BookVehicle 
BookVehicle::BookVehicle() {
    car = nullptr;
}

// Destructor
BookVehicle::~BookVehicle() {
    if (car != nullptr) {
        delete car;
    }
}

// Overload -> operator to access Car class members
Car* BookVehicle::operator->() {
    return car;
}

// Overload * operator to access Car object
Car& BookVehicle::operator*() {
    return *car;
}

// Function to create a new car booking
void BookVehicle::createBooking(Car* newCar) {
    if (car != nullptr) {
        delete car; // Release the previous car
    }
    car = newCar; // Assign the new car
}
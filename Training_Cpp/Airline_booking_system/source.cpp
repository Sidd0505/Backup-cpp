#include "header.h"

Flight::Flight()
    : flightNumber(""), flightClass(ECONOMY), ticketsAvailable(0), ticketsIssued(0), fromPlace("Mumbai"), toPlace("") {}

void Flight::setFlightNumber(const std::string& number) {
    flightNumber = number;
}

std::string Flight::getFlightNumber() const { 
    return flightNumber; 
}

void Flight::setFlightClass(FlightClass fClass) {
    flightClass = fClass;
}

FlightClass Flight::getFlightClass() const { 
    return flightClass;
}

void Flight::setTicketsAvailable(int available) {
    ticketsAvailable = available;
}

int Flight::getTicketsAvailable() const {
    return ticketsAvailable;
}

void Flight::setTicketsIssued(int issued) {
    ticketsIssued = issued;
}

int Flight::getTicketsIssued() const {
    return ticketsIssued;
}

void Flight::setFromPlace(const std::string& from) {
    fromPlace = from;
}

std::string Flight::getFromPlace() const {
    return fromPlace;
}

void Flight::setToPlace(const std::string& to) {
    toPlace = to;
}

std::string Flight::getToPlace() const {
    return toPlace;
}

void Flight::display() const {
    std::cout << "Flight Number: " << flightNumber << std::endl;
    std::cout << "Flight Class: " << flightClass << std::endl;
    std::cout << "Tickets Available: " << ticketsAvailable << std::endl;
    std::cout << "Tickets Issued: " << ticketsIssued << std::endl;
    std::cout << "From: " << fromPlace << std::endl;
    std::cout << "To: " << toPlace << std::endl;
    std::cout << "Fare: " << calculateFare() << " Rs" << std::endl;
}

void Flight::bookFlight(int ticketsToBook) {
    if (ticketsToBook <= ticketsAvailable) {
        ticketsIssued += ticketsToBook;
        ticketsAvailable -= ticketsToBook;
        std::cout << ticketsToBook << " tickets booked successfully for Flight " << flightNumber << std::endl;
        std::cout<<"Fare of the flight is"<<calculateFare()*ticketsToBook;
    } else {
        std::cout << "Not enough tickets available for booking " << ticketsToBook << " tickets for Flight " << flightNumber << std::endl;
    }
}

int Flight::calculateFare() const {
    if (fromPlace == "Mumbai") {
        if (toPlace == "Goa") {
            return 4470;
        } else if (toPlace == "Delhi") {
            return 4181;
        } else if (toPlace == "Bangalore") {
            return 2170;
        } else if (toPlace == "Ahmedabad") {
            return 1752;
        }
    }
    return 0; // Invalid route or fromPlace
}

bool searchFlight(const std::string& flightNumber, Flight flights[], int numFlights) {
    for (int i = 0; i < numFlights; i++) {
        if (flights[i].getFlightNumber() == flightNumber) {
            flights[i].display();
            return true;
        }
    }
    std::cout << "No flight with flight number " << flightNumber << " found." << std::endl;
    return false;
}
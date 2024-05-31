#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
 
// Enum for Flight Class
enum FlightClass {
    ECONOMY,
    PREMIUMECONOMY,
    BUSINESS,
    FIRSTCLASS
};

class Flight {
private:
    std::string flightNumber;
    FlightClass flightClass;
    int ticketsAvailable;
    int ticketsIssued;
    std::string fromPlace;
    std::string toPlace;

public:
    // Default constructor
    Flight();

    // Display flight details
    void display() const;

    // Setters and getters for class members
    void setFlightNumber(const std::string& number);
    std::string getFlightNumber() const; 
    void setFlightClass(FlightClass fClass);
    FlightClass getFlightClass() const;
    void setTicketsAvailable(int available);
    int getTicketsAvailable() const;
    void setTicketsIssued(int issued);
    int getTicketsIssued() const;
    void setFromPlace(const std::string& from);
    std::string getFromPlace() const;
    void setToPlace(const std::string& to);
    std::string getToPlace() const;

    // Book a flight
    void bookFlight(int ticketsToBook);

    // Calculate fare based on the distance between fromPlace and toPlace
    int calculateFare() const;
};

// Global function to search for a flight by flight number
bool searchFlight(const std::string& flightNumber, Flight flights[], int numFlights);

#endif
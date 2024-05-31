#include<iostream>
#ifndef TRAIN_H
#define TRAIN_H
 
#include <string>
 
enum TravelClass {
    AC2TIER,
    FIRST,
    SLEEPER,
    AC3TIER,
    AC3ECONOMY
};
 
class Train {
private:
    std::string train_name;
    int train_number;
    int available_number_of_seats;
    TravelClass travel_class;
    std::string from_place;
    std::string to_place;
    int distance;
 
public:
    Train();
    void display() const;
    void createTrain(const std::string& name, int number, int seats, TravelClass tClass, const std::string& from, const std::string& to, int dist);
 
    int getNumber();
    static void searchTrain(int trainNumber, const Train trains[], int numTrains);
    void bookSeats(int seatsToBook);
    int calculateFare() const;
};
 
#endif
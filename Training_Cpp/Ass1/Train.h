#ifndef TRAIN_H
#define TRAIN_H
 
#include <iostream>
#include <string>
 
enum class TravelClass {
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
    int available_seats;
    TravelClass travel_class;
    std::string fromplace;
    std::string toplace;
    int distance;
 
public:
    Train();
    Train(std::string name, int number, int seats, TravelClass tClass, std::string from, std::string to);
    void display() const;
    void booktrain(int numSeats);
    static void searchTrain(int train_number, Train trains[], int size);
    int calculateFare() const;
    int getTrainNumber() const;
};
 
#endif
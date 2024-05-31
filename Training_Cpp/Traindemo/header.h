#include<iostream>
#include<cstring>
#ifndef HEADER_H
#define HEADER_H

enum Travelclass{
    AC2TIER,
    FIRST,
    SLEEPER,
    AC3TIER,
    AC3ECONOMY,
};

class Train{
    private:
    std::string train_name;
    int train_number;
    int available_number_of_seat;
    Travelclass travel_class;
    std::string from_place;
    std::string to_place;
    int distance;

    public:
    Train();
    void display() const;
    void createTrain(const std::string &name,int number,int seat,Travelclass tclass,const std::string &fplace,const std::string &tplace,int d) ;
    int getNumber();
   
    void bookSeats(int seatsToBook);
    int calculateFare() const;
    
};
void searchTrain(int trainNumber, Train trains[], int numTrains);






#endif
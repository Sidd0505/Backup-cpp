#ifndef PTRAIN_H
#define PTRAIN_H

#include<iostream>
#include"Travel_class.h"

class pTrain
{
private:
    /* data */
    std::string trainName;
    int trainNumber;
    TravelClass class_Type;
    std::string fromplace = "New Delhi";
    std::string toPlace;
    int distance;

    static int availableSeates;

public:
    pTrain(/* args */);

    void display();
    void bookTrain();
    int calculateFare();
    

    
    ~pTrain();

    std::string getTrainName() const { return trainName; }
    void setTrainName(const std::string &trainName_) { trainName = trainName_; }

    int getTrainNumber() const { return trainNumber; }
    void setTrainNumber(int trainNumber_) { trainNumber = trainNumber_; }

    TravelClass classType() const { return class_Type; }
    void setClassType(const TravelClass &classType) { class_Type = classType; }

    std::string getFromplace() const { return fromplace; }
    void setFromplace(const std::string &fromplace_) { fromplace = fromplace_; }

    std::string getToPlace() const { return toPlace; }
    void setToPlace(const std::string &toPlace_) { toPlace = toPlace_; }

    int getDistance() const { return distance; }
    void setDistance(int distance_) { distance = distance_; }

    static int getAvailableSeates() { return pTrain::availableSeates; }
    static void setAvailableSeates(int availableSeates) { pTrain::availableSeates = availableSeates; }
};

void search(pTrain, int);
void showMenu(pTrain *, int);

#endif // PTRAIN_H

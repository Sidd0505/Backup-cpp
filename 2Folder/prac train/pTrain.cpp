#include<iostream>
#include "pTrain.h"

//global array of distance
int dist[5] = {1720,1205,980,2100,300};


// global array of destination
std::string destination[5]={"kolhapur", "surat", "nagpur","ranchi","dehradun"};

// static variable for train initializing train number
int pTrain :: availableSeates = 450;


//default constructor
pTrain::pTrain()
{
    trainName = "Vande bharat";
    trainNumber = 007;
    class_Type = TravelClass::AC3ECONOMY;
    fromplace = "New Delhi";
    toPlace = "kolhapur";
    distance = 1720;
}
//end of default constructor

//function to display train details
void pTrain::display()
{

}

void pTrain::bookTrain()
{
}

int pTrain::calculateFare()
{
    return 0;
}

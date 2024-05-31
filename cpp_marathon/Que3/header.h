# include<iostream>
using namespace std;

class Flight
{
    long flightNumber;
    float distance;
    float fare;
    static int count;
     float fuel;
    public:
        
        Flight();
        Flight(long,float,float,float);
        void calculateFuelQuantity();
        void FeedInfo();
        void showInfo();
       static int CalculateTotalFightObject();
        long getFlightno();
        void fuelamount(float);
};
#include<iostream>
#include<cstring>

enum TravelClass
{
    AC2TIER,FIRST,SLEEPER,AC3TIER,AC3ECONOMY
};

class Train
{
    int train_no,available_no_of_seats;
    int distance;
    std::string train_name;
    std::string fromplace;
    std::string toplace;
    TravelClass travel_class;

    public:
    Train();
    void createtrain(const std::string&, int,int,TravelClass,const std::string&,const std::string&,int); 
    int calculatefare(int distance);
    void getdistance();
    void display();
    int gettrainno();
};

bool searchtrain(int,Train arr);
#ifndef HEADER_H                    //Header Guard
#define HEADER_H

#include<iostream>
#include<cstring>

enum ElectricitySlabs
{
    E1 = 125,E2=150, E3 = 200
};

class Electricity
{
    private:                                        //Private Data of this class
    int sanctionLoad;
    ElectricitySlabs electricity;
    long presentReading;
    long previousReading;

    public:                                                     //Function Declarations
    Electricity();
    Electricity(int, long, long);
    long getPresentReading() ;
    void setPresentReading(long );
    long  getPreviousReading() ;
    void setPreviousReading(long );
    double calculateElectricityBill();
    int getSanctionLoad();
    void setSanctionLoad(int );
    void display();
    void accept();
};

#endif // HEADER_H              //Header Guard

//Thermometer
#include<iostream>
using namespace std;

class thermometer
{
    private:
    int modelno;
    char buildmaterial[10];
    char displaycompany[20];

    public:
    void displaytemp();
    void reset();
    void tempconvert();  //farenheit to celceus or celcius to farenheit
}
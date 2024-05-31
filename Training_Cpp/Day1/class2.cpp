#include<iostream>
using namespace std;

class car
{
    private:
    int vinnumber;
    char modelname[20];
    int builtyear;
    int licenseplate;

    public:
    void fueltankindication();
    void showkm();
    void speedshow();
}
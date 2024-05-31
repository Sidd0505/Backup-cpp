#include<iostream>
using namespace std;

class Product
{
    int pid;
    public:
    Product()
    {
        pid = 11;
    }

};

class Houseproduct:public Product
{
    int hid;
    public:
    Houseproduct(int h)
    {
        hid =h;
    }

};
int main()
{
    Houseproduct h1(5);
    try
    {
        throw h1;
    }
    catch(Product P)
    {
        cout<<"The catch is successful. \n";
    }
    
}
#include<iostream>
#include<cstring>

using namespace std;

class Animal
{
    public:
    string color ="black";
};

class dog:public Animal
{
    public:
    string color = "White";
};

int main()
{
    dog d;
    cout<<d.color;
}
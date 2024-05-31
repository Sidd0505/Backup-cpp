#include<iostream>
using namespace std;

class Rectangle
{
    int length,width;
    public:
    Rectangle();
    Rectangle(int,int);
    void add();
    void sub();
    void display();
    int getlentgh();
    int getwidth();
    void area();
    void displayarea();
};
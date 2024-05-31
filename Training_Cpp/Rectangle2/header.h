#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

    public:
    void display();
    Rectangle();
    Rectangle(int , int);
    Rectangle operator+(Rectangle &);
    Rectangle operator-(Rectangle &);
    bool operator==(Rectangle &);
    Rectangle& operator++();
    Rectangle operator++(int);
    Rectangle operator-();
    Rectangle operator+(int );
    friend Rectangle operator+(int n,Rectangle &r3);

    friend void operator<<( std::ostream &, Rectangle &);

    //friend std::ostream& operator<<(std::ostream &,Rectangle &);
};
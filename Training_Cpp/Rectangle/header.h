#include<iostream>
using namespace std;

class rect{
    
private:
int length;
int width;
 
public:
void display();
rect();
rect(int ,int);
rect add(rect &);
rect sub(rect &);                                                          
};  
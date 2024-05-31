#include <iostream>
#include <cstring>
using namespace std;

class Account
{
    // data members/attributes/
    int accno;
    char name[20];
    double balance;

public:
    // member functions
    Account() // default constructor
    {
        accno = 10111;
        strcpy(name, "Yash");
        balance = 55000;
    }

    // parameterized constructor
    Account(int no, const char *nm, double b) : accno(no), balance(b)
    {
        strcpy(name, nm);
    }
    void display();
    void accept();
};

int main()
    {
        // create object/instance
        Account obj;
        // obj.accept();
        obj.display();
        Account obj2(20122, "Jay", 56000.76);
        obj2.display();
    }
#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<cstring>

class Inventory
{
    public:
    std::string description_of_product;
    int balancestock;
    int productcode;

    Inventory();
    Inventory(std::string, int ,int);
    friend void purchase(Inventory);
    friend void sale();
    friend void search();
    std::string getvalue(std::string);
    int getter(int);
    int get(int );
    friend std::ostream& operator<<(std::ostream, Inventory );
};

#endif // HEADER_H

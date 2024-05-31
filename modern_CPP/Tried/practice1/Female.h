#ifndef FEMALE_H
#define FEMALE_H

#include<iostream>
#include"FemaleType.h"

class Female
{
private:
    /* data */
    std::string _name{""};
    int _age{0};
    std::string _colour{""};
    Female_type _type;

public:
    Female(/* args */) {}
    ~Female() {}

    Female(std::string name, int age, std::string colour, Female_type type);

    std::string name() const { return _name; }

    int age() const { return _age; }

    std::string colour() const { return _colour; }

    Female_type type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Female &rhs);


};

#endif // FEMALE_H

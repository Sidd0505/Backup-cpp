#ifndef MALE_H
#define MALE_H

#include"MaleType.h"
#include<iostream>
#include<memory>
#include"Female.h"

using FemaleWrapper=std::reference_wrapper<std::shared_ptr<Female> >;

class Male
{
private:
    /* data */
    std::string _name{""};
    int _age{0};
    std::string _colour{""};
    Male_type _type;
    FemaleWrapper _femalewrapper; 

public:
    Male(/* args */) =default;
    ~Male() {}

    Male(std::string name, int age, std::string colour, Male_type type,FemaleWrapper femalewrap);

    std::string name() const { return _name; }

    int age() const { return _age; }

    std::string colour() const { return _colour; }

    Male_type type() const { return _type; }

    FemaleWrapper femalewrapper() const { return _femalewrapper; }

    friend std::ostream &operator<<(std::ostream &os, const Male &rhs);
};

#endif // MALE_H

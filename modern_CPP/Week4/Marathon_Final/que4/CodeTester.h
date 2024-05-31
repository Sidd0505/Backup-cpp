#ifndef CODETESTER_H
#define CODETESTER_H

#include<iostream>
#include<vector>
#include "Developer.h"

class CodeTester
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    int _experience_years;
    Skills _skill;

public:

    CodeTester() = default;
    CodeTester(const CodeTester&) = delete;
    CodeTester& operator=(const CodeTester&) = delete;
    CodeTester(CodeTester&&) = delete;
    CodeTester& operator=(CodeTester&&) = delete;
    ~CodeTester() = default;

    CodeTester(std::string id, std::string name, float salary, int years, Skills sk);

    float CalculateBonus();

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    int experienceYears() const { return _experience_years; }

    Skills skill() const { return _skill; }

    friend std::ostream &operator<<(std::ostream &os, const CodeTester &rhs);
};


#endif // CODETESTER_H

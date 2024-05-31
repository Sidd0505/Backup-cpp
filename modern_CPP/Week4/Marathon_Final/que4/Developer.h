#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "SkillSet.h"
#include <vector>
#include <ostream>

using Skills = std::vector<SkillSet>;

class Developer
{
private:

    std::string _id;
    std::string _name;
    float _salary;
    int _experience_years;
    Skills _skill;

public:

    Developer() = default;
    Developer(const Developer&) = delete;
    Developer& operator=(const Developer&) = delete;
    Developer(Developer&&) = delete;
    Developer& operator=(Developer&&) = delete;
    ~Developer() = default;

    Developer(std::string id, std::string name, float salary, int years, Skills sk);

    float CalculateBonus();

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    int experienceYears() const { return _experience_years; }

    Skills skill() const { return _skill; }

    friend std::ostream &operator<<(std::ostream &os, const Developer &rhs);

};

#endif // DEVELOPER_H

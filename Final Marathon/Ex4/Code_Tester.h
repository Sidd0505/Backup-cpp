#ifndef CODE_TESTER_H
#define CODE_TESTER_H

#include<iostream>
#include"skillset.h"
#include<vector>


class Code_Tester{
    private:
    std::string _id;
    std::string _name;
    float _salary;
    int _experience_years;
    std::vector<skillset>_skill;

    public:

    
    Code_Tester() = default;
    Code_Tester(const Code_Tester&) = delete;
    Code_Tester& operator=(const Code_Tester&) = delete;
    Code_Tester(Code_Tester&&) = delete;
    Code_Tester& operator=(Code_Tester&&) = delete;
    ~Code_Tester() = default;

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    int experienceYears() const { return _experience_years; }

    std::vector<skillset>skill() const { return _skill; }

    friend std::ostream &operator<<(std::ostream &os, const Code_Tester &rhs);



};

#endif // CODE_TESTER_H

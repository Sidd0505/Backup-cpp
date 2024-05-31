#ifndef BUSINESSOWNER_H
#define BUSINESSOWNER_H
#include<iostream>
#include"BusinessType.h"
class BusinessOwner
{
private:
    float _expense;
    float _revenue;
    std::string  _registerBusinessName;
    BusinessType _type;
public:
    BusinessOwner(float expense, float revenue, std::string registerBusinessName, BusinessType type);
    BusinessOwner() = delete;
    BusinessOwner(const BusinessOwner&) = delete;
    BusinessOwner(BusinessOwner&&) = delete;
    BusinessOwner& operator= (const BusinessOwner&)= delete;
    BusinessOwner& operator= (const BusinessOwner&&) = delete;

    ~BusinessOwner()= default;;

    float expense() const { return _expense; }

    float revenue() const { return _revenue; }

    std::string registerBusinessName() const { return _registerBusinessName; }

    BusinessType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs);
};


#endif // BUSINESSOWNER_H

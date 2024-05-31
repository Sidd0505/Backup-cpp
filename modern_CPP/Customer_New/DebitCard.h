#ifndef DEBITCARD_H
#define DEBITCARD_H

#include<iostream>
#include"DebitCardType.h"
#include<memory>
#include<vector>

class DebitCard{
    int _Cvv;
    std::string _Name;
    std::string _ExpiryDate;
    DebitCardType _Type;

    public:

    DebitCard() = default;

    DebitCard(DebitCard&) = delete;

    DebitCard(int Cvv, std::string Name, std::string ExpiryDate, DebitCardType Type);

    DebitCard(DebitCard&&) = delete;

    DebitCard operator = (DebitCard&) = delete;

    DebitCard operator = (DebitCard&&) = delete;

    ~DebitCard() = default;

    int cvv() const { return _Cvv; }
    void setCvv(int Cvv) { _Cvv = Cvv; }

    std::string name() const { return _Name; }
    void setName(const std::string &Name) { _Name = Name; }

    std::string expiryDate() const { return _ExpiryDate; }
    void setExpiryDate(const std::string &ExpiryDate) { _ExpiryDate = ExpiryDate; }

    DebitCardType type() const { return _Type; }
    void setType(const DebitCardType &Type) { _Type = Type; }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);

};

#endif // DEBITCARD_H

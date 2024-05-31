#ifndef DEBITCARD_H
#define DEBITCARD_H

#include<iostream>
#include"DebitCardType.h"

class Debitcard final
{
    private:
    int _cvv;
    std::string _name;
    std::string _expiry;
    DebitCardType type;

    public:
    Debitcard(int cvv, std::string name, std::string expiry, DebitCardType type);

    Debitcard();

    Debitcard(const Debitcard&) = delete;

    Debitcard& operator = (const Debitcard&) = delete;

    Debitcard(Debitcard&&) = delete;

    Debitcard& operator = (Debitcard&&) = delete;

    ~Debitcard()= default;   

    int cvv() const { return _cvv; }
    void setCvv(int cvv) { _cvv = cvv; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string expiry() const { return _expiry; }
    void setExpiry(const std::string &expiry) { _expiry = expiry; }

    DebitCardType getType() const { return type; }
    void setType(const DebitCardType &type_) { type = type_; }

    int cvv() const { return _cvv; }

    std::string name() const { return _name; }

   // void setCvv(int cvv) { _cvv = cvv; }

    friend std::ostream &operator<<(std::ostream &os, const Debitcard &rhs);


};

// class Modified: public Debitcard{  //will throw an error

// }

#endif // DEBITCARD_H

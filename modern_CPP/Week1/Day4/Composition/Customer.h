#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include"_Customer_type.h"
#include"DebitCard.h"
#include<memory>
#include<vector>

class Customer
{
    private:
    int _id;
    std::string name;
    int _age;
    CustomerType _type;
    //becoz we r doing composition
    std::shared_ptr<Debitcard>_card;

    public:
    Customer() = delete;
    
    Customer(int id, std::string name, int age, CustomerType type, std::shared_ptr<Debitcard> card);

    Customer(const Customer&) = delete;

    Customer& operator = (const Customer&) = delete;

    Customer(Customer&&) = delete;

    Customer& operator = (Customer&&) = delete;

    ~Customer()= default;   

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    int age() const { return _age; }
    void setAge(int age) { _age = age; }

    CustomerType type() const { return _type; }
    void setType(const CustomerType &type) { _type = type; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

    

};

#endif // CUSTOMER_H

//Has a relationship
//i.e.composition

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include"_Customer_type.h"
#include"DebitCard.h"

class Customer
{
    private:
    int _Id;
    std::string _Name;
    int _Age;
    CustomerType _Type;
    std::shared_ptr<DebitCard>_Card;

    public:
     Customer(int Id, std::string Name, int Age, CustomerType Type, std::shared_ptr<DebitCard>Card);
    Customer() = default;

    Customer (Customer&) = delete;

    Customer (Customer&&) = delete;

    Customer& operator = (Customer&) = delete;

    Customer& operator = (Customer&&) = delete;

    ~Customer()= default;

   

    int id() const { return _Id; }
    void setId(int Id) { _Id = Id; }

    std::string name() const { return _Name; }
    void setName(const std::string &Name) { _Name = Name; }

    int age() const { return _Age; }
    void setAge(int Age) { _Age = Age; }

    CustomerType type() const { return _Type; }
    void setType(const CustomerType &Type) { _Type = Type; }

    std::shared_ptr<DebitCard>card() const { return _Card; }
    void setCard(const std::shared_ptr<DebitCard>&Card) { _Card = Card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    
};



#endif // CUSTOMER_H

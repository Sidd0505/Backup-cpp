#include<iostream>
#include"Customer.h"
#include"_Customer_type.h"
#include"DebitCard.h"
#include"DebitCardType.h"
#include<memory>
//auto keyword is used to infer the data type of the variable based on the initialization value.
std::shared_ptr<Customer> dummy()
{
    //std::shared_ptr<Customer> ptr = std::make_shared<Customer> he
    auto ptr = std::make_shared<Customer>(
        101,
        "Siddhant",
        27,
        std::make_shared<Debitcard>(111,"Sid","12/31",DebitCardType::DOMESTIC)
    );
    return ptr;
}//it returns shared_ptr to customer
int main()
{
    auto ans = dummy();

}
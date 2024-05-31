#include "Functionalities.h"

void CreateObject(Container &data)
{
    data.emplace_back(
        std::make_shared<Customer>(001, "Siddhant", 69, CustomerType::ELITE,
                                   std::make_shared<DebitCard>(345, "Sid_Sonawane", "15/56", DebitCardType::PLATINUM)));

    data.emplace_back(
        std::make_shared<Customer>(002, "Pranjal", 51, CustomerType::NORMAL,
                                   std::make_shared<DebitCard>(123, "Pranjal_Aher", "34/89", DebitCardType::GOLD)));

    data.emplace_back(
        std::make_shared<Customer>(003, "Siddhi", 41, CustomerType::NORMAL,
                                   std::make_shared<DebitCard>(13, "Siddhi_Shimpi", "3/80", DebitCardType::REGULAR)));
}

float AverageAgeOFCustomer(Container &data)
{
    if (data.empty())
        throw std::runtime_error("The data is empty");

    float total = 0.0f;
    for (Pointer ptr : data)
    {
        total += ptr->age();
    }
    return total / data.size();
}

// // A fun to return Nth object from the container.
Pointer NthObject(Container &data, int N)
{
    if (data.empty())
        throw std::runtime_error("The Container is empty");

    // std::vector<Pointer>::const_iterator itr = data.begin();
    auto itr = data.begin();
    while (N > 1)
    {
        itr++;
        N--;
    }
    
    
    // throw std::runtime_error("The given Customer does not exist");
    return *itr;

}

int AgeofGivenCustomer(Container &data, int Id)
{
    if (data.empty())
        throw std::runtime_error("The data is empty");

    for (Pointer ptr : data)
    {
        if (ptr->id() == Id)
            return ptr->age();
    }

    throw std::runtime_error("The given Id does not exist");
}

// // A function to find the cvv number of debit card for customer whose Id is provided as a parameter
int CvvNumberofCustomer(Container &data, int Id)
{
    if (data.empty())
        throw std::runtime_error("The Data is empty");

    for (Pointer ptr : data)
    {
        if (ptr->id() == Id)
            return ptr->card()->cvv();
    }
    throw std::runtime_error("The Id provided does not exist");
}

// /*
//     A function to return the expiry date of debit card whose cvv number matches with
//      value given by the user.
// */

std::string ExpiryDateofDebitCard(Container &data, int Cvv)
{
    if (data.empty())
        throw std::runtime_error("The data is empty.");

    for (Pointer ptr : data)
    {
        if (ptr->card()->cvv() == Cvv)
            return ptr->card()->expiryDate();
    }
    throw std::runtime_error("The Cvv number does not exist");
}

// /*
//     A function to return a container of all "Pointer"s which point to customer with age above 50.
// */

Container CustomerAgeAbove50(Container &data)
{
    Container result;
    if (data.empty())
        throw std::runtime_error("The Data is empty");

    for (Pointer ptr : data)
    {
        if (ptr->age() > 50)
            result.emplace_back(ptr); // check this later
    }
    return result;
}

/*
    A function to return the debitcard Pointer for customer whose ID is given as input parameter
*/

std::shared_ptr<DebitCard> DebitCardInfo(Container &data, int Id)
{
    if (data.empty())
        throw std::runtime_error("The data is empty");

    for (Pointer ptr : data)
    {
        if (ptr->id() == Id)
            return ptr->card();
    }
    throw std::runtime_error("The Id you provided does not exist");
}


void Display(Container& data){
    for(Pointer& ptr:data){
        std::cout<<"\n"<<*ptr;
    }
}

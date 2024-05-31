#include"Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
    std::make_shared<Customer>(  //rvalue
    111,
    "Siddhant",
    27,
    CustomerType::REGULAR,
    std::make_shared<Debitcard>(101,"Sid Sonawane","11/31",DebitCardType::DOMESTIC)
        )
    );

    data.emplace_back(
        std::make_shared<Customer>(
            112,
            "Pranjal",
            34,
            CustomerType::ELITE,
            std::make_shared<Debitcard>(102,"Pranjal Aher", "12/30", DebitCardType::INTERNANTIONAL)
        )
    );
};

/*
a Fun to find avg age of all customers
*/
float AverageAge(Container& data)
{
    if(data.empty()){
        throw std::runtime_error("Empty data");
    }

    float total = 0.0f;

    // for - each loop(ranged-based for loop)   -->[Modern-Cpp feature]

    /*
        for every "pointer" called "ptr" present in data do the following


        for every pointer in the data do the needful 
        here Pointer is stored in vector
    */
    for(Pointer &ptr : data){
        //smart pointer is used as a regular pointer
        total = total + ptr ->age();
    }
    return total / data.size();
}



Pointer NthCustomer(Container &data, int N)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    if(N > data.size() || N < 1)
    {
        throw std::runtime_error("N is beyond available items");
    }

    auto itr = data.begin();     //We can write Pointer keyword instead of auto
    while(N>0)
    {
        itr++;            //iterator
        N--; 
    }
    return *itr;

    //return data[N-1];             //we can use this instead of this above 5-6 lines but if datatype change this method is not reliable
}



int AgeOfGivenCustomerID(Container &data, int id)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    //linear search like
    for(Pointer& ptr :data)                                 //from where this ptr come from
    {
        if(ptr ->id()==id){
            return ptr->age();
        }
    }

    throw std::runtime_error("ID NOT FOUND");  //No flag needed here

}


int FindCvvNumber(Container& data, int id)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    for(Pointer& ptr :data)
    {
        if(ptr ->id()==id){
            return ptr->card()->cvv();
        }
    }

    throw std::runtime_error("ID NOT FOUND");  //No flag needed here


}


std::string ExpiryDateOfDebitCard(Container &data, int cvv)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    for(Pointer& ptr :data)
    {
        if(ptr ->card()->cvv()==cvv){
            return ptr->card()->expiry();
        }
    }
      throw std::runtime_error("CVV NOT FOUND");  //No flag needed here


}


Container CustomerAbove50(const Container &data)  //this is copy by value not reference
{
     if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    Container result;

    for(const Pointer& ptr :data)
    {
        if(ptr ->age()>50){
            result.emplace_back(ptr);
        }
    }

    /*
        if no customer is above 50
    */
    if(result.empty())
    {
        throw std::runtime_error("No customer is above the age of 50");
    }
    return result;
}

/*
Pointer DebitCardPointer(Container &data, int id)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    for(Pointer& ptr :data)
    {
        if(ptr ->id()==id){
            return ptr->card();
        }
    }

    throw std::runtime_error("ID NOT FOUND");  //No flag needed here

};
*/

std::shared_ptr<Debitcard> DebitCardForGivenId(const Container &data, int id)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    for(const Pointer& ptr : data) //for const lvalue refrence of pointer in data
    {
        if(ptr->id()==id)
        {
            return ptr->card();
        }
    }
    throw std::runtime_error("ID NOT FOUND"); 
    
}

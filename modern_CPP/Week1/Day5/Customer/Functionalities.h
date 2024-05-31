#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include<memory>
#include"Customer.h"


using Pointer = std::shared_ptr<Customer>;  //lvalue
using Container = std::vector<Pointer>;

/*
    object creation
*/
void CreateObjects(Container &data) noexcept;


float AverageAge(Container& data);


/*
 A fun to return Nth object from the container.
*/
Pointer NthCustomer(Container& data, int N);

/*
A function to find the age of the customer whose id is provided as a parameter
*/
int AgeOfGivenCustomerID(Container& data, int id);


/*
    A function to find the cvv number of debit card for customer whose Id is provided as a parameter
*/
int FindCvvNumber(Container& data, int id);




/*
    A function to return the expiry date of debit card whose cvv number matches with
     value given by the user.
*/
std::string ExpiryDateOfDebitCard(Container& data, int cvv); 





/*
    A function to return a container of all "Pointer"s which point to customer with age above 50.
*/
Container CustomerAbove50(const Container& data);
//void CustomerAbove50(const Container&, Container result)   we can also do this but return type will be void
/*
    A function to return the debitcard Pointer for customer whose ID is given as input parameter
*/
//Pointer DebitCardPointer(Container& data, int id);

std::shared_ptr<Debitcard>DebitCardForGivenId(const Container& data, int id);

#endif // FUNCTIONALITIES_H

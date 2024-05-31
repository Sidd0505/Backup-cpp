#include"Customer.h"
#include"DebitCard.h"

//because of composition
using Pointer = std::shared_ptr<Customer>;
using Container = std::vector<Pointer>;



//object creation
void CreateObject(Container & data);

void Display(Container& data);


float AverageAgeOFCustomer(Container& data);

/*
 A fun to return Nth object from the container.
*/
Pointer NthObject(Container& data, int N);


/*
A function to find the age of the customer whose id is provided as a parameter
*/
int AgeofGivenCustomer(Container& data, int Id);


/*
    A function to find the cvv number of debit card for customer whose Id is provided as a parameter
*/
int CvvNumberofCustomer(Container& data, int Id);


/*
    A function to return the expiry date of debit card whose cvv number matches with
     value given by the user.
*/
std::string ExpiryDateofDebitCard(Container& data, int Cvv);


/*
    A function to return a container of all "Pointer"s which point to customer with age above 50.
*/
Container CustomerAgeAbove50(Container& data);


/*
    A function to return the debitcard Pointer for customer whose ID is given as input parameter
*/
std::shared_ptr<DebitCard> DebitCardInfo(Container& data, int Id);
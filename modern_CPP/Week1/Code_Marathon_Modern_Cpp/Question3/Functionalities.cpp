#include "Functionalities.h"

void CreateObjects(Container &data)
{   
    data.emplace_back(std::make_shared<CashPaymentBooking>());
}
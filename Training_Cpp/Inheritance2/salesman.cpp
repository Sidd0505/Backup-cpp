#include "salesman.h"

Salesperson::Salesperson()
{
    std::cout << "\n Salesperson() called";
    salesamount = 20000;
    commrate = 0.5;
}

void Salesperson::display()
{
    Employee ::display();
}
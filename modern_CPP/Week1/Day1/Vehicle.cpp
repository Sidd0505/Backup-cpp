#include "Vehicle.h"
/*
// classi then tab

#include <iostream>
#include <cstring>



/*Copy asssignment

int n1 = 10;
int n2 = 20;
n1 = n2;


copy construction
int n2 = 20;
int n1 = n2;
*/

Vehicle::Vehicle(int id, std::string model, float price, VehicleType type)
     :_id(id),_model_name(model),_price(price),_type(type)
{ }




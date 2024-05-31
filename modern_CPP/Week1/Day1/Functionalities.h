#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Vehicle.h" //because want to create vehicle object
/*
CreateObjects()
{
   arr

    return arr   //this is address
}
//basically return object of local varaible, local variable 
//will erased when they go out of scope
*/

/*
CreateObjects(Vehicle* arr[3])
{
    //Hard code do not do
}
*/


/*
    accept a pointer to an array of pointers
    Initialize objects on heap. store their address in 
    the array
*/
void CreateObjects(Vehicle** arr,const int size);

/*
    Loop over instances.
    calculate total price and divide it by number of instances.
*/
float AveragePrice(Vehicle** arr,const int size);


/*
    Return _id of vehicle with lowest price
*/
int LowestPriceId(Vehicle** arr, const int size);

#endif // FUNCTIONALITIES_H

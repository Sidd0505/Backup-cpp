#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Car.h"
#include<memory>
#include<vector>
#include<functional>

using Pointer=std::shared_ptr<Car>;
using Container=std::vector<Pointer>;

using StringContainer=std::vector<std::string>;

void CreateObject(Container& data); 

/* 
A function that displays count of all car units whose horsepower is over 100 and price as passed as parameter
*/
void CountCarsMatchingCondition(Container& data,float inputPrice);

/*
A function that displays average of Horsepower from all cars who safisfies conditions
a) price is above 10000
b) The Manufacture is neither Cadillac nor audi 
*/
void DisplayAverageHorsepowerOfCars(Container& data);

/* 
A function that displays combine insurance cost
*/
void DisplayCombinedInsuranceCostOfCars(Container& data);

/*
A functions that displays list of all unique car brands 
*/
void DisplayUniqueCarBrands(Container& data);

void Operation(std::function<void(Container)> func,Container& data);


#endif // FUNCTIONALITIES_H

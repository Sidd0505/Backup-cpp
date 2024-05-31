#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include"Car.h"
#include"Engine.h"
#include<vector>
#include<memory>

using Pointer = std::shared_ptr<Car>;  //lvalue
using Container = std::vector<Pointer>;

void CreateObjects(Container &data);

int CarEngineHorsepower(Container& data, std::string CarId);

Container EngineTorque(const Container&);

Container CarTypeMatch(const Container&, CarType Type);

float AverageEngineHorsePower(const Container& data);

std::string FindCarId(const Container&);

float CombinedPrice(Pointer &p1, Pointer &p2);
 


#endif // FUNCTIONALITIES_H

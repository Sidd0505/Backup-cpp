#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <iostream>
#include <memory>
#include <vector>

#include "carType.h"
#include "Car.h"
#include "Engine.h"
#include "engineType.h"

using Pointer = std::shared_ptr<Car>;
using Container = std::vector<Pointer>;

void CreateObjects(Container &data);
int HorsepowerUsingCardID(const Container &data, std::string carid);
Container TorqueOver80(const Container &data);
Container SearchWithCarType(const Container &data, carType type);
float AverageEngineHorsepower(const Container &data);
std::string CardIdByLowestPrice(const Container &data);
float CombinedPrice(Pointer &p1, Pointer &p2);

#endif // FUNCTIONALITIES_H

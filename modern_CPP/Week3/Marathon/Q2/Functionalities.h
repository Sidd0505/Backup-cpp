#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Automobile.h"
#include"EvCar.h"
#include<memory>
#include<vector>
#include<variant>
#include<future>


using AutoPointer = std::shared_ptr<Automobile>;
using EvPointer = std::shared_ptr<EvCar>;

using VType = std::variant<AutoPointer, EvPointer>;

using Container = std::vector<VType>;

void CreateObjects(Container& data);

int FindSeatCount(Container& data, std::future<std::string>ft);

int EngineHorsepowerBelow600Count(Container& data);




#endif // FUNCTIONALITIES_H

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Engine.h"
#include<memory>
#include<optional>
#include<array>

using Pointer = std::shared_ptr<Engine>;
using Container = std::array<Pointer, 3>;

void CreateObjects(Container& data);

std::optional<Container> MatchTheConditions(Container& data);

bool CheckEngineTorqueAbove110(Container& data);

int CountOfInstances(Container& data, float value);

#endif // FUNCTIONALITIES_H

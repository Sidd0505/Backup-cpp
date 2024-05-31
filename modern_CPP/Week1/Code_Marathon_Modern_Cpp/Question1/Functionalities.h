#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Sensor.h"
#include<list>
#include<memory>

using Pointer = std::shared_ptr<Sensor>;
using Container = std::list<Pointer>;

void CreateObjects(Container &data); 

bool CheckReading(Container& data);

int CountOfSimilarType(Container& data, SensorType typee);

std::string FindNameOfSensor(Container& data, int id, SensorType typee);

Container ReturnAllInstances(Container& data);

#endif // FUNCTIONALITIES_H

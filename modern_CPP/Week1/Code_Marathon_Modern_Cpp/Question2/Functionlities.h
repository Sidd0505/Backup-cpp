#include"TouristVehicle.h"
#include"Permit.h"

using Pointer = std::shared_ptr<TouristVehicle>;
using Container = std::list<Pointer>;

using Pointer2 = std::shared_ptr<Permit>;
using Container2 = std::list<Pointer2>;

void CreateObjects(Container & data);

Container SatisfyTheConditions(Container& data);

float AveragePermitDurationLeft(Container& data);

PermitType FindTouristVehicle(Container& data);

Container NInstancesTouristVehicle(Container& data, int N);


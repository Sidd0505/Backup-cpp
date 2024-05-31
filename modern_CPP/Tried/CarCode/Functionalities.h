#include"Car.h"
#include"Engine.h"
#include<memory>
#include<vector>
#include<functional>

using CarPointer = std::shared_ptr<Car>;
using CarContainer = std::vector<CarPointer>;

using EnginePointer = std::shared_ptr<Engine>;
using EngineContainer = std::vector<EnginePointer>;

void CreateClassObjects(CarContainer& cardata, EngineContainer& engdata);

void Display(CarContainer& data);

float highdata(std::function<float(CarContainer&, EngineType) >fn, CarContainer& data);



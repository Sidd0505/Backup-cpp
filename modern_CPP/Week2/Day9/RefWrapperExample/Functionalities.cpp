#include "Functionalities.h"


void CreateObjects(CarContainer &carData, EngineContainer &engineData)
{
    /*
    auto e1 = std::make_shared<Engine>(
        200,
        EngineType::PETROL
    );
    */

    engineData[0] = std::make_shared<Engine>(
        200,
        EngineType::PETROL
    );


    carData[0]=std::make_shared<Car>(

        101,
        "Dzire",
        500000.0f,
        engineData[0]
    );
}


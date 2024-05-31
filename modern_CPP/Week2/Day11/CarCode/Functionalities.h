#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<array>
#include"Car.h"
#include"Engine.h"
#include<memory>

using Carpointer=std::shared_ptr<Car>;
using Carcontainer=std::array<Carpointer,3>;


using EnginePointer=std::shared_ptr<Engine>;   
using Enginecontainer=std::array<EnginePointer,3>;
/*
    We are making EngineContainer because we want to store the value given to 
    engine in CreateObjects function that is why
*/

void CreateObject(Carcontainer& cardata,Enginecontainer &engdata);

void Display(Carcontainer& cardata);

float highdata(Carcontainer data,std::function<float(Carcontainer &,EngineType type)>fn);


#endif // FUNCTIONALITIES_H

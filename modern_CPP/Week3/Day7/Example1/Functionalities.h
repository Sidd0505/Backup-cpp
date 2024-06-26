#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<vector>
#include"DataModeller.h"
//we can use words like datavariant, dataPointer

using dataPointer = std::unique_ptr<DataModeller>;

using Container = std::vector<dataPointer >;
void CreateObjects(Container& data);

void CalculateTaxPayable(const Container& data);


void CallParenOperator(const Container& data);
#endif // FUNCTIONALITIES_H

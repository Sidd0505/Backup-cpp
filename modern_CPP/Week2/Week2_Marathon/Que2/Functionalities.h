#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Product.h"
#include<array>


using Pointer = std::shared_ptr<Product>;
using Container = std::vector<Pointer>;

void CreateClassObjects(Container& data);

//float AverageProductPrice(Container& data, ProductType);

extern std::function<float(Container&, ProductType)> AverageProductPrice;


//float RetrunProductTaxAmount(Container& );

extern std::function<float(Container&)> RetrunProductTaxAmount;

//Container NProductInstances(Container& data, int N);

extern std::function<Container(Container&, int)>NProductInstances;

//Container UniqueProductBrands(Container& data);

//extern std::function<Container(Container&)>UniqueProductBrands;

//Container ContainerAddress(Container& data, std::string brand);

extern std::function<Container(Container&, std::string)> ContainerAddress;

//std::array<CountOfInstances(ProductType , ProductOrigin),2>

extern std::function<std::array<int,2>(Container&, ProductType, ProductOrigin)>CountOfInstances;

#endif // FUNCTIONALITIES_H

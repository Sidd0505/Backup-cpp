#include"Functionalities.h"

int main()
{
    Container data;
    std::cout<<AverageProductPrice(data, ProductType::APPLIANCES);

    std::cout<<RetrunProductTaxAmount(data);

    // Container temp;
    // for(Pointer & ptr: temp)
    // {
    //     std::cout<<*ptr;
    // }

    
}
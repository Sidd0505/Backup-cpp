#include"Functionalities.h"

void CreateClassObjects(Container& data)
{
    data.emplace_back(
        std::make_shared<Product>("A101", ProductType::FOOD, 455.0f,"Sony", 
                                ProductOrigin::IMPORTED, 30.0f)
    );

    data.emplace_back(
        std::make_shared<Product>("B201", ProductType::APPLIANCES, 2000.0f,"Toyota", 
                                ProductOrigin::DOMESTIC, 400.0f)
    );

    data.emplace_back(
        std::make_shared<Product>("C301", ProductType::PERFUME, 20000.0f,"Fogg", 
                                ProductOrigin::IMPORTED, 1000.0f)
    );

}


std::function<float(Container&, ProductType)> AverageProductPrice = [](Container& data, ProductType type)
{
    int sum=0;
    for(Pointer &ptr: data)
    {
        if(ptr ->type()==type)
        {
            sum += ptr->productprice();
        }
    }
    return sum/data.size();
};


std::function<float(Container&)> RetrunProductTaxAmount = [](Container& data)
{
    int max =0;
    for(Pointer &ptr: data)
    {
        if(ptr->productprice() > max)
        {
            max = ptr->productprice();
        }
    }
    return max;
};

// auto NProductInstances = [](Container& data, int N)
// {
//     Container temp;
//     for(Pointer& ptr :data)
//     {
//         if(N>0)
//         {
//         temp.emplace_back(*ptr);
//         N--;
//         }
//     }
//     return temp;
// };

// // auto UniqueProductBrands = [](Container& data){
// //     Container temp;
// //     for(Pointer& ptr: data)
// //     {
// //         if(ptr->productBrand() == ptr->productBrand() )
// //             temp.emplace_back(*ptr);
// //     }
// // };

// auto CountOfInstances = [](Container& data, ProductType type, ProductOrigin origin){
    
//     int count =0, cnt =0;
//     std::array<int, 2>arr{count, cnt};
//     for(Pointer& ptr:data)
//     {
//         if(ptr->type()== ProductType::FOOD)
//         {
//             count++;
//         }
//     }

//     for(Pointer& ptr : data)
//     {
//          if(ptr->origin() == ProductOrigin::DOMESTIC)
//         {
//             cnt++;
//         }
//     }
//     return arr;
// };

// auto ContainerAddress = [](Container& data, std::string name)
// {
//     Container temp;
//     for(Pointer& ptr : data)
//     {
//         if(ptr->productBrand()== name)
//         {
//             temp.emplace_back(ptr);
//         }
//     }
// };
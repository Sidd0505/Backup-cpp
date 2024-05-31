#include "Functionalities.h"
#include<thread>
#include"Product.h"
#include<future>


int main() {
    Container Data;
    //CreateObjects(Data);
    std::thread t1(&CreateObjects, std::ref(Data));
    t1.join();
  
           
   
    std::future<int> ft = pr.get_future();
    std::future<int> result_ft = std::async(std::launch::async, &, std::ref(ft));
      //  AverageProductPriceOfGivenType(Data,Product_Type::FOOD, ans);
      std::thread t1(AverageProductPriceOfGivenType, std::ref(Data),const Product_Type type, ans);

        std::cout << ans << "\n";
   
    
    
    }
    


















    try{
        std::cout << "Function2" << "\n";
        std::cout << "Maximum Tax" << "\n\n";
        std::cout << TaxOfProductWithMaximumPrice(Data) << "\n";
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }
    
    try{
        std::cout << "Function3" << "\n";
        std::cout << "Last 2 instances" << "\n\n";
        DisplayContainer(LastNInstancesOfContainer(Data, 2));
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function4" << "\n";
        std::cout << "Unique brands" << "\n\n";

        DisplayContainer(ProductsWithUniqueBrands(Data));
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function5" << "\n";
        std::cout << "Count of food and domestic" << "\n\n";
        std::array<int, 2> arr = CountOfFoodProductsAndDomestic(Data);
        std::cout << arr[0] << " " << arr[1] << "\n";    
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function6" << "\n";
        std::cout << "Addresses container" << "\n\n";
        Container result = AddresssesOfProductSameAsGivenBrand(Data, "Nestle");
        DisplayAddresses (result);
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

}
#include <iostream>
#include "Functionalities.h"
#include <functional>
#include<thread>
using namespace std::placeholders;

int main()
{
    Container obj;
    std::thread t5(&CreateObject,std::ref(obj));
    t5.join();

    /* ----------------FUNCTIONALITY 1-------------- */
     auto partial_fun1 = std::bind(&CountCarsMatchingCondition, obj, 12000);
      
        std::thread t1(&Operation,partial_fun1,std::ref(obj));
    
   
    
    /* ----------------FUNCTIONALITY 2-------------- */
   
        auto partial_fun2 = std::bind(&DisplayAverageHorsepowerOfCars, obj);
        // Operation(partial_fun2, obj);
        std::thread t2(&Operation,partial_fun2,std::ref(obj));
        
    

    /* ----------------FUNCTIONALITY 3-------------- */
    
        auto partial_fun3 = std::bind(&DisplayCombinedInsuranceCostOfCars, obj);
        // Operation(partial_fun3, obj);
        std::thread t3(&Operation,partial_fun3,std::ref(obj));
        

    /* ----------------FUNCTIONALITY 4-------------- */
    
        auto partial_fun4 = std::bind(&DisplayUniqueCarBrands,obj);
        // Operation(partial_fun4, obj);
        std::thread t4(&Operation,partial_fun4,std::ref(obj));
        
        t1.join();
        t2.join();
        t3.join();
        t4.join();
        

    return 0;
}



// /* 


// int main()
// {
//     Container obj;
//     CreateObject(obj);

//     /* ----------------FUNCTIONALITY 1-------------- */
//     try
//     {
//         auto partial_fun1 = std::bind(&CountCarsMatchingCondition, obj, 12000);
//         // Operation(partial_fun1, obj);
//         std::thread t1(&Operation,partial_fun1,std::ref(obj));
    
//     }
//     catch (const std::string *msg)
//     {
//         std::cerr << msg << '\n';
//     }

//     /* ----------------FUNCTIONALITY 2-------------- */
//     try
//     {
//         auto partial_fun2 = std::bind(&DisplayAverageHorsepowerOfCars, obj);
//         // Operation(partial_fun2, obj);
//         std::thread t2(&Operation,partial_fun2,std::ref(obj));
//         t2.join();
//     }
//     catch (const std::string *msg)
//     {
//         std::cerr << msg << '\n';
//     }

//     /* ----------------FUNCTIONALITY 3-------------- */
//     try
//     {
//         auto partial_fun3 = std::bind(&DisplayCombinedInsuranceCostOfCars, obj);
//         // Operation(partial_fun3, obj);
//         std::thread t3(&Operation,partial_fun3,std::ref(obj));
//         t3.join();
//     }
//     catch (const std::string *msg)
//     {
//         std::cerr << msg << '\n';
//     }

//     /* ----------------FUNCTIONALITY 4-------------- */
//     try
//     {
//         auto partial_fun4 = std::bind(&DisplayUniqueCarBrands,obj);
//         // Operation(partial_fun4, obj);
//         std::thread t4(&Operation,partial_fun4,std::ref(obj));
//         t4.join();
//     }
//     catch (const std::string *msg)
//     {
//         std::cerr << msg << '\n';
//     }

//     return 0;
// }
 
//  */
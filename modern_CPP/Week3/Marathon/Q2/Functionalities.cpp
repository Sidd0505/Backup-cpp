#include"Functionalities.h"
#include<thread>
#include<algorithm>

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Automobile>("Maruti", AutomobileType::REGULAR, 67000.0f,
         4, 400)
    );

     data.emplace_back(
        std::make_shared<Automobile>("Toyota", AutomobileType::REGULAR, 67000.0f,
         4, 400)
    );

     data.emplace_back(
        std::make_shared<Automobile>("BMW", AutomobileType::TRANSPORT, 89000.0f,
         4, 400)
    );

     data.emplace_back(
        std::make_shared<EvCar>("Mercedes", AutomobileType::REGULAR, 47000.0f,
         4, 400, 98.0f)
    );

     data.emplace_back(
        std::make_shared<EvCar>("Audi", AutomobileType::REGULAR, 67000.0f,
         4, 400,78.0f)

     
    );
}

// int FindSeatCount(Container &data, std::future<std::string> ft)
// {
//      std::string givenId = ft.get();
//      int cnt;

//      for(const VType& v: data)
//      {
//           std::visit(
//             [&](auto && val){
//                 //totalPrice = totalPrice + val->price();
//                if(val ->id() == givenId)
//                     cnt = val -> seat_count();
//             },
//             v
//         );
//      }
//      return cnt;
// }


int EngineHorsepowerBelow600Count(Container& data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    int count = std::count_if(
        data.begin(),
        data.end(),
        [] (AutoPointer& ptr){return ptr->engineHorsepower()<600 ;}
    );

    std::cout<< count <<"\n";
    
}





/*
void InstantiateThreads(
    std::function< void(Container) > f1,
    std::function< void(Container, int) > f2,
    std::function< int(Container)> f3,
    std::function< float(Container)> f4,
    int N,
    std::vector<int> vec){
    
        std::thread(f1);
        std::thread(f2, std::ref(data), ft);
        arr[2] = std::thread(f3, vec);

        for(std::thread& t : arr){
        if(t.joinable()){
            t.join();
        }
    }
}

*/
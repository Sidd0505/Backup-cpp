#include "Functionalities.h"
#include <iostream>
#include <thread>

int main()
{
    Container data;
    // CreateObjects(data);
    // print (data);

    std::array < std::thread, 4 > arr;

    arr[0] = std::thread ( CreateObjects, std::ref(data) );

    arr[0].join();

    arr[1] = std::thread ( print, std::ref(data));

    for(std::thread& th : arr){
        if(th.joinable()){
            th.join();
        }
    }


    try{
        std::optional <Container> res = InstancesMatchingType (std::ref(data), HotelType::LUXURIOUS);

        for(auto v : res.value()){
            std::visit(
                [](auto&& val){
                    std::cout<<"\n\nInstances with the matching types are: "<<*val<<std::endl;
                },
                v
            );
        }
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }


    float avg = 0;
    avg = AverageRoomsAvailable(std::ref(data));
    std::cout<<"\n\nAVERAGE ROOMS AVAILABE ARE: "<<avg<<std::endl;


    VType store =  MinimumMemberVisit(data);

    std::visit(
        [](auto&& val){
            std::cout<<"\n\nMINIMUM MEMBER VISIT IS: "<<*val<<std::endl;
        },
        store
    );


    if(IfHotelExists(data, "GUPTA's RESIDE")){
        std::cout<<"\n\nHOTEL AVAIALBLE";
    }
    else{
        std::cout<<"\n\nHOTEL NOT AVAILABLE";
    }


    int min = MinimumMemberNumberReturn(data);
    std::cout<<"\n\nMINIMUM NUMBER OF MEMBER RETURN IS: "<<min<<std::endl;


    auto result = DataOfTheHotelNames(std::ref(data));
    for(auto&& v : result){
        std::cout<<"\n\nDATA OF THE HOTEL NAME IS: "<<v<<std::endl;
    }


    Container result1 = DataOfTheHotel(data);
        for(auto&& v:result1){
        std::visit(
            [](auto&& val){
                std::cout<<"\n\nDATA FOR THE HOTEL ARE: "<<*val<<std::endl;
            },
            v
        );
    }

    std::cout<<"\n\nHere is the first three instances: "<<std::endl;
    Ninstances(data, 3);


    std::cout<<"First N Instances through asyncing is: "<<"\n";

    std::promise<int> pr;

    std::future<int> ft = pr.get_future();

    std::future<Container> NInstances_result = std::async(std::launch::async,&FirstThreeNInstancesThroughAscing, std::ref(data), std::ref(ft));

    int n;

    std::cin>>n;

    pr.set_value(n);

    for(auto&& v:NInstances_result.get()){
        std::visit(
            [&](auto&& val){
                std::cout<<*val<<std::endl;
            },
            v
        );
    }


    try{
        std::optional <Container> abc = ReturnRoomsMoreThan20(std::ref(data), HotelType::LUXURIOUS, 2);

        for(auto v : abc.value()){
            std::visit(
                [&](auto&& val){
                    std::cout<<"\n\nRooms Available more than 20 is: "<<*val<<std::endl;
                },
                v
            );
        }
    }
    catch(std::runtime_error &yuk){
        std::cout<<yuk.what();
    }
    
}
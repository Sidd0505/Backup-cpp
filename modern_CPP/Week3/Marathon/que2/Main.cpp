#include "Functionalities.h"
#include <cstring>

int main(){

    Container data;
    std::thread t1(CreateObjects,std::ref(data));
    t1.join();  

    std::promise<std::string> pr;
    std::future<std::string> ft = pr.get_future();
    std::future<int> result_ft = std::async(std::launch::async, &DisplaySeatCount, std::ref(data), std::ref(ft));
    std::string val = "BMW";
    std::cout << "Enter ID: ";
    std::cin >> val;
    
    pr.set_value(val);
    int ans = result_ft.get();
    if (ans)
    {
        std::cout << "Seat Count of give ID: \n" << ans << "\n";
    }
    else {
        std::cout << "Id not found\n";
    }
    
    std::thread t4 (TotalGSTOfAllInstances, std::ref(data));
    
    t4.join();

}
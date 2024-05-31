#include "Functionalities.h"
#include<future>

int main(){

    Container data;
    CreateObjects(data);
    
    

    std::future<int> result2 = std::async(std::launch::async, CountOfEmployeesAboveThreshold, std::ref(data));
    std::cout << "Count of employees above salary 5000: " << result2.get() <<"\n";
    

    std::string id = "A102";
    std::future<float> result3 = std::async(std::launch::async, SalaryOfGivenEmployee, std::ref(data), std::ref(id));
    std::cout << "Salary of given Employee: " << result3.get() <<"\n";


    std::future<bool> result4 = std::async(std::launch::async, CheckEmployeesHaveSalaryAbovelimit, std::ref(data));
    std::cout << "Is all salaries above 6000: " << result4.get() <<"\n";

    std::future<float> result5 = std::async(std::launch::async, AverageSalaryOfTester, std::ref(data));
    std::cout << "Average Salary of Tester: " << result5.get() <<"\n";

}


#include<iostream>
#include<list>
#include<memory>
#include<vector>

/*
    uniform initialization 
    
*/

struct Employee
{
    int id;
    std::string name;
};

class Car
{
    private:
    int _id;
    std::string _name;
    public:
    Car() = default;
    Car(int id,std::string name);
    ~car();

};

int main()
{
    int n1 = 10;
    int *ptr = &n1;
    struct Employee e1{101, "Harshit"};

    Car c1{};
    Car c2{101, "Dzire"};
    int arr[3] {10,20,30};

    std::list <int> data {1,2,3};

    std::vector <int> values {1,2,3};

    std::shared_ptr<int> ptr2{ptr};  //shared pointer to the integer


}
/*
#include<iostream>
#include<unordered_map>

int main()
{

    std::unordered_map<int, std::string> map
    {
        {101, "Harshit"},
        {102, "Rohit"}
    };

    std::cout<<map<<"\n";
}
*/
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (const auto& [key, value] : myMap) {
        std::cout << "Key: " << key << ", Value: " << value << std::endl;
    }

    return 0;
}

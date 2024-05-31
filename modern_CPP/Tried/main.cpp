#include <list>
#include <iostream>
#include <algorithm>

int main(){
    std::list<int> data {10, 2, 3, 4, 5};
    std::cout << std::any_of(data.begin(), data.end(), [=](auto val){ return val % 3 == 0; ;});
}
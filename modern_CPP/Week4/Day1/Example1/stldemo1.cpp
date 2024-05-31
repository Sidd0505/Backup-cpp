#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>

template <typename T>


void display(T& container)
{
    for(auto& val : container){
        std::cout<< val <<"\t";
    }
    std::cout<<"\n"; 
}

int main()
{
    //example 1 :copy all elements unconditionally from source to destination 
    std::vector<int> v1{10,20,30};
    std::vector<int> result(v1.size());

    std::copy(v1.begin(), v1.end(), result.begin());

    //example 2: sum of all values

    std::cout<<"Total is : "<<std::accumulate(v1.begin(), v1.end(), 1, [](int total, int val){return total+ val; } ) <<"\n";

    std::cout<< "Product is :"<< std::accumulate(
        v1.begin(),
        v1.end(),
        1,
        [](int current_result, int item_from_container){return current_result* item_from_container;})
        <<"\n";


}
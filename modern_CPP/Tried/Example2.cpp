#include<iostream>
#include<vector>

// void func(int n)
// {
//     std::cout<< n <<" , ";
// }

int main()
{
    std::vector<int> v{1,2,3,4,5};
   
    auto lamb = [&v](){for(int& ele: v) std::cout<<ele<<" , "; };
    
    lamb();
    return 0;
}

 // for(int& ele :v)
    // {
    //     auto lamb = [](int n){std::cout<<n<<" , ";};
    //     //func(ele);
    //     //std::cout<<ele;
    // };
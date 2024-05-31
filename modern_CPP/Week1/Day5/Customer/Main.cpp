#include"Functionalities.h"

int main()
{
    Container data;  //empty container vector

    CreateObjects(data);


    try{
    Container ans = CustomerAbove50(data); //we can't traverse through container directly we have to use for-each loop

    for(const Pointer& ptr : ans)
    {
        std::cout<< *ptr<<"\n";
    }
    }catch(const std::runtime_error& ex){
        std::cout<<ex.what()<<"\n";
    }
}

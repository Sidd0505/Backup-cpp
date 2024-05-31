#include "DataModeller.h"


void DataModeller::operator()()
{
    if(_goodsPrices.empty()){
        throw std::runtime_error("Not Found");
    }
    float total = 0.0f;
    for(float val : _goodsPrices){
        total+= val;
    }
    std::cout<<"Average value is :"<<total/_goodsPrices.size()<<"\n";
}


DataModeller::DataModeller(VType v, std::vector<float>& prices)
            :_goodsPrices(prices), _instance(std::move(v))
{
}


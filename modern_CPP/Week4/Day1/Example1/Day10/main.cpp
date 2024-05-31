#include"Functionalities.h"

using namespace std::placeholders;

int main()
{
    Container data;

    //SalaryGivenId(data,101)
    auto fn = std::bind(SalaryGivenId,_1,101 );//Lambda fun ko bind krne ke liye & nahi lagana
    fn(data); //101 should be hardcoded 

}
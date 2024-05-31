#include"Customer.h"
#include"DebitCard.h"
#include"Functionalities.h"


int main()
{
    
        //Customer obj;
        Container data;
        CreateObject(data);
        // Display(data);
        // AverageAgeOFCustomer(data);
        // std::cout<<"\n"<<*NthObject(data, 2);
        Container ans = CustomerAgeAbove50(data);
        Display(ans);
        std::cout<<"\n"<<*DebitCardInfo(data,2);
}        
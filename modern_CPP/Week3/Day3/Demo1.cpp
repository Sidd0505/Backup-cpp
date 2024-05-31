#include"Employee.h"
#include"BusinessOwner.h"
#include<variant>
#include<memory>

int main()
{
    std::variant<Employee, BusinessOwner>v1;

    v1 = Employee();
    /*
        visit needs at least 2 parameters

        first: lambda function that explains what to do with item inside the variant 
        second( and subsequent parameter): objects of variant class. (object/s on which visit
        lambda has to be applied)
    */

   std::visit(
        [](auto&& val){val.PayTax();},
        v1
   );

    v1 = BusinessOwner();
    std::visit(
        [](auto&& val){val.PayTax();},
        v1
    );

    std::shared_ptr<Employee> e1 = std::make_shared<Employee>();

    std::variant< std::shared_ptr<Employee>, std::shared_ptr<BusinessOwner> >v2;

    v2 = e1; // storing e1 inside the variant. This should be stored in slot 1

    //will open the variant for us and we will kknow if there is shared_ptr to employee or BusinessOwner
    //what to do with variant the visit fun will tell us
    std::visit(
        [](auto&& val ){val ->PayTax();},
        v2
    );


}

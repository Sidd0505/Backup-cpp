#include<iostream>
#include<memory>
#include<list>
#include<vector>
#include"employee.h"

using EmpPointer = std::shared_ptr<employee>;
using ListContainer = std::list<EmpPointer>;
using VectorContainer = std::vector<EmpPointer>;

void CreateObjects(ListContainer& l1, VectorContainer& v1)
{
    l1.emplace_back(
        std::make_shared<employee>(101)
    );
    l1.emplace_back(
        std::make_shared<employee>(102)
    );
    l1.emplace_back(
        std::make_shared<employee>(103)
    );
    v1.emplace_back(
        std::make_shared<employee>(201)
    );
    v1.emplace_back(
        std::make_shared<employee>(202)
    );
    v1.emplace_back(
        std::make_shared<employee>(203)
    );


}

int main()
{
    ListContainer l1;
    VectorContainer v1;
    CreateObjects(l1, v1);
}


/*
    Types of common logic building exercises

    1) Total or algebraic sum operation
        - 1) Create initial total variable with initial value as 0 
        - 2) For each item to be added in the total, do the foll.
               a) Fetch the item
               b) Add the item to the sum
               c) Update the sum
            
        - 3) Return the final sum


    2) Find the min value from a collection
        e.g. Find lowest (minimum) integer from an array
        i) Create an inintial min value WHICH MUST BE EQAL TO THE FIRST ITEM FROM THE COLLECTION

        ii) for each item in the collection, do the following 

            a) fetch the item 
            b) Compare item with "Min_Value" so far 
                b1) if current item is larger than min_value  "ignore"
                b2) if the current item is smaller, update the "min_value" as "current item"
        iii) Finally, the min_value now holds "the global minima"

    3) Find an attribute associated with the min value object 
        e.g. Finding the car with min mileage and returning the mileage 
        i) Create an inintia min value WHICH MUST BE EQUAL TO THE FIRST ITEM FROM THE COLLECTION 

        ii) Also save attribute(to be returned) of the first item 

        iii) for each object do the following
                a) Compare and check whether current value is lower than min 
                    a1) if yes, update min, update associated value
                    a2) if no, ignore 

        iv) Return the associated value.         
        


*/

/*
    FindidMinMileage(Container& data){
        float min_mileage = data[0] -> mileage();
        int min_id = data[0] ->id();

        for(VehicleObj v :data)
        {
            float current_mileage = v->mileage();
            if (v ->mileage() < min_mileage()){
                min_mileage = current_mileage;
                //IMPORTANT
                min_id = c->id();
            }
        }
            return min_id;
    }


*/
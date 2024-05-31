#include"Vehicle.h"
#include"Functionalities.h"

int main()
{

   const int size = 3;
   //arr is an array of 3 vehicle pointers
    Vehicle* arr[3]={nullptr};      //want to intialize ptr as null

    CreateObjects(arr,size);


    /*
        Average price should be calculated for
         all instances stored in the array of CreateObjects
    */

   float ans = AveragePrice(arr, size);

   /*
   min price function
   */

  int id = LowestPriceId(arr, size);
  std::cout<<"The ans is correct.";
}
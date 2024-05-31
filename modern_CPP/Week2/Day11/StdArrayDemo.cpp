#include<array>
#include<iostream>
/*
we can make array for anything like smart pointer just condition is 
default value should be there so that compiler can store them.

*/

int main()
{
    //int arr1[3]   --->old syntax
    std::array<int,3>arr1;
    arr1[0] =100;
    arr1[1]=200;
    arr1[2]=300;


    for(int i=0;i<3;i++)
    {
        arr1[i] = (i+1)*100;
    }

    //print array

    for(int val:arr1)
    {
        std::cout<<val<<"\n";
    }

    std::cout<<"First number is :"<<arr1.front()<<"\n";

    std::cout<<"Last number is :"<<arr1.back()<<"\n";

    //arr2d is an array of size 3 where each element is an array of size 2
    int arr2d[3][2]{
        {70,20},
        {40,50},
        {60,70}
    };
    
    
    
    /*
    an array that contains 3 elements (3 rows)
    Each element of this array (each row) is itself
    An array of 2 integers
    */
     //   an array of 2 integers 3 times 
     std::array<std::array<int,2>,3>arr2d{
      std::array<int, 2> {70,20},
      std::array<int,2>{40,50},
        std::array<int,2>{60,70}
    };


    //display
    for(std::array<int,2>& row:arr2d){
        
        //columns

        for(int element :row){
            std::cout<<element<<"\n";
        }
    };

    std::cout<<arr2d[1][1]<<"\n";

}
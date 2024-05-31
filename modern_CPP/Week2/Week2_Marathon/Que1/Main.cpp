#include<iostream>
#include<array>
#include"Functionalities.h"

int main()
{

    std::array<std::array<int , 2 >,2>Matrix;

    MatrixCreation(Matrix);

    std::cout<<"Each Row sum is : \n";
    RowSum(Matrix);


    std::cout<<"Highest value of the given matrix is : \n";
    MaxValueOfArray(Matrix);

    
    std::cout<<"Square of the  last position of the given matrix is  :\n";
    LastPositionSquareValue(Matrix);


    std::cout<<"Maximum Number in the given matrix is : \n";
    MaxNumber(Matrix);
    
    
}
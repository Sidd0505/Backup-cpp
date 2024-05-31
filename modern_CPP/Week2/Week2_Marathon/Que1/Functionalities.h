#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include <array>

//Creating a 2 by 2 matrix 
void MatrixCreation(std::array<std::array<int, 2>, 2> &arr)
{

    for (int i = 0; i < 2; i++)
    {
        int value = 0;
        for (int j = 0; j < 2; j++)
        {
            std::cin >> value;
            arr[i][j] = value;
        }
    }
}

//lambda function to calculate sum of each row
auto RowSum = [](std::array<std::array<int, 2>, 2> Matrix)
{
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum = sum + Matrix[i][j];
        }
        std::cout << sum << "\n";
    }
};

//lambda function to calculate Highest value
auto MaxValueOfArray = [](std::array<std::array<int, 2>, 2> Matrix)
{
    int max = Matrix[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (max < Matrix[i][j])
            {
                max = Matrix[i][j];
            }
        }
    }
    std::cout << max << "\n";
};

//lambda function to calculate last position square
auto LastPositionSquareValue = [](std::array<std::array<int, 2>, 2> Matrix)
{
    std::cout << Matrix[1][1] * Matrix[1][1] << "\n";
};


//lambda function to show the highest number in each column
auto MaxNumber = [](std ::array<std ::array<int, 2>, 2> Matrix) {
    for(int i = 0; i < 2; i++){
        int max = Matrix[0][0];
        int temp =0;
        for(int j = 0; j< 2; j++){
            if(max < Matrix[i][j]){
                temp = max;
                max = Matrix[i][j];
                
            }

        }
        std::cout<<max<<"\n";
    }
};

#endif // FUNCTIONALITIES_H




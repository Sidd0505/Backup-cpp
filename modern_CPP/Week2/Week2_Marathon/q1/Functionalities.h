#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include <array>
const int R = 2;
const int C = 2;

//Creating a 2 by 2 matrix 
void MatrixCreation(std::array<std::array<int, R>, C> &arr)
{

    for (int i = 0; i < R; i++)
    {
        int val = 0;
        for (int j = 0; j < C; j++)
        {
            std::cin >> val;
            arr[i][j] = val;
        }
    }
}

//lambda function to calculate sum of each row
auto RowSum = [](std::array<std::array<int, R>, C> Matrix)
{
    for (int i = 0; i < R; i++)
    {
        int sum = 0;
        for (int j = 0; j < C; j++)
        {
            sum = sum + Matrix[i][j];
        }
        std::cout << sum << "\n";
    }
};

//lambda function to calculate Highest value
auto MaxValueOfArray = [](std::array<std::array<int, R>, C> Matrix)
{
    int max = Matrix[0][0];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
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
auto LastPositionSquareValue = [](std::array<std::array<int, R>, C> Matrix)
{
    std::cout << Matrix[R - 1][C - 1] * Matrix[R - 1][C - 1] << "\n";
};


//lambda function to show the highest number in each column
auto MaxNumber = [](std ::array<std ::array<int, R>, C> Matrix) {
    for(int i = 0; i < R ; i++){
        int max = Matrix[0][0];

        for(int j = 0; j< C; j++){
            if(max < Matrix[j][i]){
                max = Matrix[j][i];
            }

        }
        std::cout<<max <<"\n";
    }
};

#endif // FUNCTIONALITIES_H




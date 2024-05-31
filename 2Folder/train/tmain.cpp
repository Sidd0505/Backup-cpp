#include <iostream>

#include "Train.h"

#include "Travelclass.h"

int main()

{
    // creating array of 5 train objects

    Train tArr[5];

    int size = 5;

    // passing array of trains to showMenu funtion in file Train.cpp

    showMenu(tArr, size);

    return 0;
}
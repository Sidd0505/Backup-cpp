// main.cpp
#include "header.h"
#include <iostream>

int main() {
    // Create an object of Electricity on the heap
    Electricity* electricity = new Electricity(3, 1200, 1000);
    double electricityBill = electricity->calculateElectricityBill();
    std::cout << "Electricity Bill: Rs " << electricityBill << std::endl;
    delete electricity; // Remember to deallocate memory for the object created on the heap

    // Create an object of Water on the stack
    Water water(800, 600);
    double waterBill = water.calculateWaterBill();
    std::cout << "Water Bill: Rs " << waterBill << std::endl;

    return 0;
} 
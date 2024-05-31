// main.cpp
#include "header.h"
#include <iostream>

// Function to calculate the average price of vehicles of a particular category in the inventory
double calculateAvg(const Car inventory[], int size, CarCategory category) {
double sum = 0.0;
    int count = 0;

    
    for (int i = 0; i < size; i++) {
        if (inventory[i].getCategory() == category) {
            sum += inventory[i].getPrice(); 
            count++;
        }
    }

    if (count > 0) {
        return sum / count;
    } else {
        return 0.0; // No vehicles of the specified category found in the inventory
    } 
}

int main() {
    // Create a single object of Car
    std::cout<<"enter car details\n";
    Car newcar;
    newcar.accept();
    std::cout << "new Car:\n" << newcar << std::endl;

    // Car myCar("ABC123", "Toyota", 25000.0, 5, 1500.0, 800.0, SUV);
    // std::cout << "My Car:\n" << myCar << std::endl;

    // Create an array of Car objects (inventory)
    const int inventorySize = 3;
    Car inventory[inventorySize] = {
        Car("XYZ456", "Ford", 22000.0, 5, 1200.0, 700.0, HatchBack),
        Car("LMN789", "Honda", 28000.0, 5, 1600.0, 900.0, Sedan),
        Car("PQR111", "Nissan", 26000.0, 5, 1400.0, 750.0, SUV)
    };

    // Calculate the average price of SUVs in the inventory
    double avgSUVPrice = calculateAvg(inventory, inventorySize, SUV);
    if (avgSUVPrice > 0) {
        std::cout << "Average price of SUVs in the inventory: $" << avgSUVPrice << std::endl;
    } else {
        std::cout << "No SUVs found in the inventory." << std::endl;
    }

    return 0;
}
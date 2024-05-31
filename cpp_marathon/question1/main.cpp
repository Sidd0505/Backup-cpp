#include<iostream>
#include"header.h"

int main() {
    // Create an object of Electricity on the stack
    
    Electricity electricity;
    electricity.accept();                                               //Function call to accept
    double electricityBill = electricity.calculateElectricityBill();    //Function call to calculateElectricityBill
    electricity.display();
}










/*
int main() {
    // Create an object of Electricity on the stack
    Electricity electricity = Electricity(3, 1200, 1000);
     double electricityBill = electricity.calculateElectricityBill();
     electricity.display();
}
*/

/*
    int main() {
    // Create an object of Electricity on the heap
    Electricity* electricity = new Electricity(3, 1200, 1300);
    double electricityBill = electricity->calculateElectricityBill();
    electricity->display();
    //std::cout << "Electricity Bill: Rs " << electricityBill << std::endl;
    delete electricity; // Remember to deallocate memory for the object created on the heap
}
*/
/* //     int n;
    //     // Create an array of 5 flight objects
    //   static Flight flights[5];

    //     // Allow the user to book flights
    //     flights[0].setFlightNumber("101");

    //     flights[1].setFlightNumber("202");

    //     flights[2].setFlightNumber("303");

    //     flights[3].setFlightNumber("404");

    //     flights[4].setFlightNumber("405");

    // Book a flight
    // flights[0].bookFlight(5);
    // flights[1].bookFlight(8);
    // flights[2].bookFlight(15);

    // Search for
*/

#include "Train.h"
#include<iostream>
 
int main() {
    // Create an array of 5 train objects
    Train trains[5];
 
    // Allow the user to book a train and store the information in the array
    int trainNumberToBook;
    int numSeatsToBook;
    std::cout << "Enter Train Number to Book: ";
    std::cin >> trainNumberToBook;
    std::cout << "Enter the number of seats to book: ";
    std::cin >> numSeatsToBook;
 
    Train::searchTrain(trainNumberToBook, trains, 5);
 
    for (int i = 0; i < 5; i++) {
        if (trains[i].getTrainNumber() == trainNumberToBook) {
            std::cout<<trains[i].getTrainNumber();
            trains[i].booktrain(numSeatsToBook);
        }
    }
 
    // Call calculateFare function to display fare value
    int fare = trains[0].calculateFare();
    std::cout << "Fare for the selected train: Rs. " << fare << std::endl;
 
    // Display information of all available booked trains
    for (int i = 0; i < 5; i++) {
        if (trains[i].getTrainNumber() != 0) {
            std::cout << "Train " << i + 1 << " Information:" << std::endl;
            trains[i].display();
        }
    }
 
    return 0;
}
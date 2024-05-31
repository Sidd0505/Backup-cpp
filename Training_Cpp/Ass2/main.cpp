#include "Train.h"
 
int main() {
    Train trains[5];
    int numTrains = 0;
 
    // Predefined train details
    trains[0].createTrain("Train A", 101, 200, AC2TIER, "New Delhi", "Kolhapur", 1720);
    trains[1].createTrain("Train B", 102, 150, FIRST, "New Delhi", "Surat", 1205);
    trains[2].createTrain("Train C", 103, 300, SLEEPER, "New Delhi", "Nagpur", 980);
    trains[3].createTrain("Train D", 104, 180, AC3TIER, "New Delhi", "Ranchi", 2100);
    trains[4].createTrain("Train E", 105, 250, AC3ECONOMY, "New Delhi", "Dehradun", 300);
    numTrains = 5;
 
    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Display Train Details\n";
        std::cout << "2. Book Seats\n";
        std::cout << "3. Exit\n";
 
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
 
        if (choice == 1) {
            std::cout << "\nTrain Details:\n";
            for (int i = 0; i < numTrains; i++) {
                trains[i].display();
                std::cout << std::endl;
            }
        } else if (choice == 2) {
            int trainToBook, seatsToBook;
            std::cout << "Enter Train Number to book seats on: ";
            std::cin >> trainToBook;
            std::cout << "Enter the number of seats to book: ";
            std::cin >> seatsToBook;
 
            for (int i = 0; i < numTrains; i++) {
                if (trains[i].getNumber() == trainToBook) {
                    trains[i].bookSeats(seatsToBook);
                    break;
                }
            }
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
 
    return 0;
}
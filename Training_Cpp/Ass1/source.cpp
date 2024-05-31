#include "Train.h"
 
Train::Train() {
    train_name = "";
    train_number = 0;
    available_seats = 5;
    travel_class = TravelClass::AC2TIER;
    fromplace = "New Delhi";
    toplace = "Kolhapur";
    distance = 1720;
}
 
Train::Train(std::string name, int number, int seats, TravelClass tClass, std::string from, std::string to)
    : train_name(name), train_number(number), available_seats(seats), travel_class(tClass), fromplace(from), toplace(to) {
 
    if (from == "New Delhi" && to == "Kolhapur") {
        distance = 1720;
    }
    
}
 
void Train::display() const {
    std::cout << "Train Name: " << train_name << std::endl;
    std::cout << "Train Number: " << getTrainNumber() << std::endl;
    std::cout << "Available Seats: " << available_seats << std::endl;
    // Display other train information
}
 
void Train::booktrain(int numSeats) {
    if (numSeats > available_seats) {
        std::cout << "Insufficient seats available." << std::endl;
    } else {
        available_seats -= numSeats;
        std::cout << numSeats << " seat(s) booked successfully." << std::endl;
    }
}
 
void Train::searchTrain(int train_number, Train trains[], int size) {
    for (int i = 0; i < size; i++) {
        if (trains[i].getTrainNumber() == train_number) {
            std::cout << "Train Found!" << std::endl;
            trains[i].display();
            return;
        }
    }
    std::cout << "No train found with the given number." << std::endl;
}
 
int Train::calculateFare() const {
    if (distance > 100 && distance < 500) {
        return 800;
    } else if (distance >= 500 && distance < 1000) {
        return 900;
    } else if (distance >= 1000 && distance < 1500) {
        return 1100;
    } else if (distance >= 1500 && distance < 3000) {
        return 1300;
    } else {
        return 2000;
    }
}
 
int Train::getTrainNumber() const {
    return train_number;
}
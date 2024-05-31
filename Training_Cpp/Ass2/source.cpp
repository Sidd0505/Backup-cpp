#include "Train.h"
#include <iostream>
 
Train::Train() {
    // Default constructor, you can initialize default values here if needed.
}
 
void Train::display() const {
    std::cout << "Train Name: " << train_name << std::endl;
    std::cout << "Train Number: " << train_number << std::endl;
    std::cout << "Available Seats: " << available_number_of_seats << std::endl;
    std::cout << "Travel Class: " << travel_class << std::endl;
    std::cout << "To Place: " << to_place << std::endl;    
    std::cout << "From Place: " << from_place << std::endl;
    std::cout << "Distance: " << distance << " km" << std::endl;
}
 
void Train::createTrain(const std::string& name, int number, int seats, TravelClass tClass, const std::string& from, const std::string& to, int dist) {
    train_name = name;
    train_number = number;
    available_number_of_seats = seats;
    travel_class = tClass;
    from_place = from;
    to_place = to;
    distance = dist;
}
 
int Train::getNumber() {
    
    return this->train_number;
}
 
void Train::searchTrain(int trainNumber, const Train trains[], int numTrains) {
    for (int i = 0; i < numTrains; i++) {
        if (trains[i].train_number == trainNumber) {
            trains[i].display();
            return;
        }
    }
    std::cout << "No train found with Train Number: " << trainNumber << std::endl;
}
 
void Train::bookSeats(int seatsToBook) {
    if (seatsToBook <= available_number_of_seats) {
        available_number_of_seats -= seatsToBook;
        std::cout << seatsToBook << " seats booked successfully on Train " << train_number << ". Available seats: " << available_number_of_seats << std::endl;
    } else {
        std::cout << "Not enough seats available to book " << seatsToBook << " seats on Train " << train_number << ". Available seats: " << available_number_of_seats << std::endl;
    }
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

#include<iostream>
#include"header.h"

Train::Train(){
    //default constructor
}

void Train::display() const {
    std::cout<<"Train name"<<train_name<<std::endl;
    std::cout<<"Train number"<<train_number<<std::endl;
    std::cout<<"Available seats"<< available_number_of_seat<<std::endl;
    std::cout<<"Travel class"<< travel_class<<std::endl;
    std::cout<<"from place"<<from_place<<std::endl;
    std::cout<<"To place"<< to_place<<std::endl;
    std::cout<<"Distance"<< distance<<std::endl;
    
}

void Train::createTrain(const std::string& name,int number,int seats,Travelclass tclass,const std::string& fplace,const std::string& tplace,int d){
    train_name = name;
    train_number = number;
    available_number_of_seat = seats;
    travel_class=tclass;
    from_place = fplace;
    to_place = tplace;
    distance = d;
}

 
int Train::getNumber() {
    
    return train_number;

}
 
void Train::bookSeats(int seatsToBook) {
    if (seatsToBook <=   available_number_of_seat ) {
        available_number_of_seat  -= seatsToBook;
        std::cout << seatsToBook << " seats booked successfully on Train " << train_number << ". Available seats: " << available_number_of_seat  << std::endl;
        int d= Train::calculateFare();
        std::cout<<"The fare amonut is:"<<d*seatsToBook;
    } else {
        std::cout << "Not enough seats available to book " << seatsToBook << " seats on Train " << train_number << ". Available seats: " <<  available_number_of_seat << std::endl;
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
void searchTrain(int trainNumber, Train trains[], int numTrains) {
    bool found = false;

    for (int i = 0; i < numTrains; i++) {
        if (trains[i].getNumber() == trainNumber) {
            trains[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "No train with number " << trainNumber << " found." << std::endl;
    }
}


 
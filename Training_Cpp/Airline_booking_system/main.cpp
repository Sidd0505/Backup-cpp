#include "header.h"

int main() {
    // Create an array of 5 flight objects
    Flight flights[5];

    // Allow the user to book flights
    flights[0].setFlightNumber("AI101");
    flights[0].setFlightClass(ECONOMY);
    flights[0].setTicketsAvailable(100);
    flights[0].setFromPlace("Mumbai");
    flights[0].setToPlace("Goa"); 
 
    flights[1].setFlightNumber("AI202");
    flights[1].setFlightClass(PREMIUMECONOMY);
    flights[1].setTicketsAvailable(50);
    flights[1].setFromPlace("Mumbai");
    flights[1].setToPlace("Delhi");

    flights[2].setFlightNumber("AI303");
    flights[2].setFlightClass(BUSINESS);
    flights[2].setTicketsAvailable(30);
    flights[2].setFromPlace("Mumbai");
    flights[2].setToPlace("Bangalore");

    flights[3].setFlightNumber("AI404");
    flights[3].setFlightClass(FIRSTCLASS);
    flights[3].setTicketsAvailable(20);
    flights[3].setFromPlace("Mumbai");
    flights[3].setToPlace("Ahmedabad");

    flights[4].setFlightNumber("AI405");
    flights[4].setFlightClass(FIRSTCLASS);
    flights[4].setTicketsAvailable(21);
    flights[4].setFromPlace("Mumbai");
    flights[4].setToPlace("Ahmedabad");

    // Book a flight
    // flights[0].bookFlight(5);
    // flights[1].bookFlight(8);
    // flights[2].bookFlight(15);

    // Search for

     int choice;
    do
    {
        printf("Menu\n:");
        printf("1.Display Flight Details\n:");
        printf("2.Search Flight \n:");
        printf("3:Book Seats\n:");
        printf("4:Exit\n:");

        std::cout << "Enter your choice:";
        std::cin >> choice;
        std::string flightNumber;
        std::string flighttobook;

        switch (choice)
        {
        case 1:
            std::cout << "Train details\n";
            for (int i = 0; i < 5; i++)
            {
                flights[i].display();
                std::cout << std::endl;
            }
            break;

        case 2:
               // Search train by number
                
                std::cout << "Enter the train number to search: ";
                std::cin >> flightNumber;
                searchFlight(flightNumber, flights , 5);
                break;

        case 3:
            
            int seattobook;
            std::cout << "Enter the train to book:";
            std::cin >> flighttobook;
            std::cout << "Enter the seat you want to book:";
            std::cin >> seattobook;

            for (int i = 0; i < 5; i++)
            {
                if (flights[i].getFlightNumber() == flighttobook)
                {
                    flights[i].bookFlight(seattobook);
                    break;
            }
            }
            break;

            case 4:
            std::cout<<"Exit:";
            break;

            default:
            std::cout<<"Please enter rthe correct choice!!!!";

        
    }
    }
    while(choice!=4);
    
}
#include "header.h"
#include <iostream>

int main()

{
    int numTrains = 0;

    Train trains[5];
    trains[0].createTrain("Train A", 101, 200, AC2TIER, "New Delhi", "Kolhapur", 1720);
    trains[1].createTrain("Train B", 102, 150, FIRST, "New Delhi", "Surat", 1205);
    trains[2].createTrain("Train C", 103, 300, SLEEPER, "New Delhi", "Nagpur", 980);
    trains[3].createTrain("Train D", 104, 180, AC3TIER, "New Delhi", "Ranchi", 2100);
    trains[4].createTrain("Train E", 105, 250, AC3ECONOMY, "New Delhi", "Dehradun", 300);
    
    numTrains = 5;

    int choice;
    do
    {
        printf("Menu\n:");
        printf("1.Display Train Details\n:");
        printf("2.Search Train \n:");
        printf("3:Book Seats\n:");
        printf("4:Exit\n:");

        std::cout << "Enter your choice:";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Train details\n";
            for (int i = 0; i < numTrains; i++)
            {
                trains[i].display();
                std::cout << std::endl;
            }
            break;

        case 2:
               // Search train by number
                int trainNumber;
                std::cout << "Enter the train number to search: ";
                std::cin >> trainNumber;
                searchTrain(trainNumber, trains , numTrains);
                break;

        case 3:
            int Traintobook, seattobook;
            std::cout << "Enter the train to book:";
            std::cin >> Traintobook;
            std::cout << "Enter the seat you want to book:";
            std::cin >> seattobook;

            for (int i = 0; i < numTrains; i++)
            {
                if (trains[i].getNumber() == Traintobook)
                {
                    trains[i].bookSeats(seattobook);
                     break;
                }
            }
            break;   

            case 4:
            std::cout<<"Exit:";
            break;

            default:
            std::cout<<"Please enter the correct choice!!!!";   
    }
    }
    while(choice!=4);
    
}
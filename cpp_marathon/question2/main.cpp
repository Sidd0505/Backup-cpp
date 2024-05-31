#include "header.h"

int main()
{
   
    Flight *arr = new Flights[3];
    int choice;
    do
    {
        std::cout << ("Menu\n:");
        std::cout << ("1.Display Flight Details\n:");
        std::cout << ("2:Calculate Fuel\n:");
        std::cout << ("3:Exit\n:");

        std::cout << "Enter your choice:";
        std::cin >> choice;
        long int flightNumber;

        switch (choice)
        {
        case 1:
            std::cout << "Flight details\n";
            for (int i = 0; i < 3; i++)
            {
                display();
                // std::cout << std::endl;
            }
            break;

        case 2:
        {
            std::cout<<"Calculating the fuel :"<<Flights->calculatefuelquantity();

        }
        case 3:
            std::cout << "Exit:";
            break;

        default:
            std::cout << "Please enter the correct choice!!!!";
        }
    }while (choice != 3);
}
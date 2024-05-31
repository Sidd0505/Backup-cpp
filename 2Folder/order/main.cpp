#include <iostream>
#include "Order.h"
#include "OnlineOrder.h"
#include "OfflineOrder.h"
void showMenu(int n)
{
    int choice, exitFlag = 1, i = 0;
    Order *o[n];

    OnlineOrder *on;
    OfflineOrder *of;

    while (exitFlag)
    {
        if (i < n)
        {

            std::cout << "\n1. Online \n2. Offline \n3. Exit\n";
            std::cout << "\nChoose order method for order: " << i + 1 << " : ";
            std::cin >> choice;

            switch (choice)
            {
            case 1:
                o[i] = new OnlineOrder();
                o[i]->accept();
                o[i]->display();
                on = dynamic_cast<OnlineOrder *>(o[i]); //Typecasting 
                i++;
                on->accept();
                on->display();
                break;

            case 2:
                o[i] = new OfflineOrder();
                o[i]->accept();
                o[i]->display();
                of = dynamic_cast<OfflineOrder *>(o[i]);
                i++;
                of->accept();
                of->display();
                break;

            case 3:
                exitFlag = 0;
                break;

            default:
                std::cout << "\nInvalid Choice";
            }
        }
        else{
            exitFlag =0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete o[i];
    }
    delete on;
    delete of;
}

int main()
{
    int n;
    std::cout << "\nEnter number of orders:";
    std::cin >> n;

    showMenu(n);
    // Order *on = new OnlineOrder[n];
    // // if()
    // for (int i = 0; i < n; i++)
    // {
    //     on[i].accept();
    //     on[i].display();
    // }
}
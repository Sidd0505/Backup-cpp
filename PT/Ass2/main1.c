#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int main()
{
    int choice;
    printf("Hello User.\n");

    while (choice != 4)
    {
        printf("1.Factorial of the number\n2. Table of the number.\n3.Reverse of number.\n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int num1;
            printf("Enter the number :");
            scanf("%d", &num1);
            factorial(num1);
            break;
        }

        case 2:
        {
            int num2;
            printf("Enter the number to form table :");
            scanf("%d", &num2);
            display(num2);
            break;
        }

        case 3:
        {
            int num3;
            printf("Enter the number to reverse :");
            scanf("%d", &num3);
            reverse(num3);
            break;
        }

        case 4:
            exit(0);

        default:
            printf("Please enter the correct choice.\n");
            break;
        }
    }
}
// 1. Higher
// 2. Lower
// 3. Modify
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define SIZE 5
int main()
{
    int choice;
    int arr[SIZE];
    printf("Enter elements:");
        for (int i = 0; i < SIZE; i++)
        {
            scanf("%d", &arr[i]);
        }

    do
    {
        printf("\n------Menu-------");
        printf("\n1.Display\n2.Highest of all\n3.Lowest of all\n4.Modify the array\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(arr);
            break;
        case 2:
            max(arr);
            break;
        case 3:
            min(arr);
            break;
        case 4:
            modify(arr);
            break;
        case 5:
            exit(1);
            break;
        }
    } while (choice != 5);
}
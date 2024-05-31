#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#define size 10
int main()
{
    int num, max, magical_number, ans = 0;

    int arr[num];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d number :", i + 1);
        scanf("%d", &arr[i]);                           //All array inputs taken
    }
    printf("Enter the magical number :");
    scanf("%d", &magical_number);
    bubblesort(arr, size);                          //calling Bubblesort
    display(arr, size);                             //calling Display function to show
    if (check(arr, size, magical_number))           //checking whether the given magical number is in array or not.
    {
        printf("\nTHe index of the magical number is %d\n", check(arr, size, magical_number));      //If present then print the index of that number
    }
    else
    {
        printf("The index of the magical number is %d\n", check(arr, size, magical_number));        //If absent print -1 at the index.
    }
}

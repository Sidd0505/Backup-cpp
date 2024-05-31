#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int bubblesort(int arr[], int size)             //Bubble sort function starts
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
}
void display(int arr[], int size)           //Display function for displaying the modified array.
{

    printf("The modified array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nThe size of an array is %d\n", size);
}

int check(int arr[], int size, int magical_no)          //checking whether the magical_no is present in the array or not.
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        if (magical_no == arr[i])
        {
            ans = i;
            return ans;
        }
    }
    return -1;
}
/*
void checkarray(int ,int)
{

}
*/
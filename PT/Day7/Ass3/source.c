#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#define size 5

void accept(int arr[])
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void display(int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("The %d element of an array is :%d\n", i + 1, arr[i]);
    }
}

void iseven(int arr[])
{
    int esum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            esum = esum + arr[i];
    }
    printf("The sum of even members is :%d\n", esum);
}

void isodd(int arr[])
{
    int osum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
            osum = osum + arr[i];
    }
    printf("The sum of odd numbers is :%d\n", osum);
}

void sort(int arr[])
{
    printf("asdf");
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
    for(int i=size-1;i>=0;i--)
        printf("\nThe new sorted array is :%d\n",arr[i]);
}
void max_min(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            printf("The maximum element of an array is :%d\n", max);
        }
    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            printf("The min element of an array is :%d\n", min);
        }
    }
}
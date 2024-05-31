#include<stdio.h>
#include"header.h"
#include<stdlib.h>
#define size 5

int main()
{
        int choice,arr[choice];
        do{
            printf("Welcome here\n");
            printf("Menu Options\n");
            printf("1.Do the accept\n2.Do the display\n3.Sum of odd number\n4.Sum of even numbers\n5.Sort the array\n6.max_min array\n7,Exit the program\n");
            printf("ENter your choice :");
            scanf("%d",&choice);
            switch (choice)
            {
                case 1: 
                        accept(arr);
                        break;

                case 2: 
                        display(arr);
                        break;
                    
                case 3:
                        iseven(arr);
                        break;
                
                case 4:
                    isodd(arr);
                    break;

                case 5:
                    sort(arr);
                    break;
    
                case 6:
                    max_min(arr);
                    break;

                case 7:
                    exit(0);
            }
        }while(choice !=7);
}
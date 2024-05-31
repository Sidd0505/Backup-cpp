#include<stdio.h>
#include"header.h"
#include<stdlib.h>
int main()
{
    int choice;
    do{
    printf("Welcome here..\n");
    printf("Tell us which pattern do you want :\n");
    printf("1. 1+11+111+1111......\n2. 2+22+222+2222+.......\n3.1+12+123+1234+.....\n4.1+22+333+4444......\n5.Exit program\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:{
            int num;
            printf("Enter how many times :");
            scanf("%d",&num);
            pattern1(num);
            break;
        } 

        case 2:
        {
            int num;
            printf("Enter how many terms do u want :");
            scanf("%d",&num);
            pattern2(num);
            break;
        }  

        case 3:
        {
            int num1;
            printf("Enter how many terms do u want :");
            scanf("%d",&num1);
            pattern3(num1);
            break;
        } 

        case 4:
        {
            int num;
            printf("Enter how many terms do u want :");
            scanf("%d",&num);
            pattern4(num);
            break;
        }  

        case 5:
            exit(0);         
    }    

    }while(choice !=5);
}
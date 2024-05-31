// 1.prime number2.Prime number range3.Co-prime4.prime factors
#include <stdio.h>
#include "header.h"
#include <stdlib.h>
int main()
{
    int choice;
    do
    {
        printf("\n---Welcome Here---\n");
        printf("The menu will appear :");
        printf("\nMenu.\n1.Prime numbers\n2.Prime numbers range\n3.Co-prime\n4.Prime factors.\n");
        printf("Enter your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int num;
            printf("Enter the number :");
            scanf("%d", &num);
            prime(num);
            break;
        }
        case 2:
        {
            int n;
            printf("Enter the range :");
            scanf("%d", &n);
            for (int i = 2; i <= n; i++)
            {
                if (range(i))
                    printf("The number %d is prime\n", i);
            }
            break;
        }

        case 3:
        {
            int num1, ans, sol, num2,a,b;
            printf("Enter the numbers :");
            scanf("%d%d", &num1, &num2);
            /*
            if(isprime(num1)&& isprime(num2))
                printf("\nThe number %d and %d are co-prime.\n",num1,num2);
            else
                printf("THe numbers are not co-prime.");
                */
            coprime(num1,num2);
            break;
        }

        case 4:
        {
            int num1;
            printf("ENter the num1 :");
            scanf("%d", &num1);
            primefactors(num1);
            break;
        }

        case 5:
            exit(0);
        }
    }while(choice!=5);
}

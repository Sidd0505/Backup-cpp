#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void positive(int n)
{
    if (n > 0)
        printf("The number %d is positive.", n);
    else if (n < 0)
        printf("The number %d is negative.", n);
    else
        printf("The number is zero.");
}

void greater(int a, int b)
{
    if (a > b)
        printf("THe number %d is greater than %d", a, b);
    else if (b > a)
        printf("The number %d is greater than number %d", b, a);
    else
        printf("The number are equal.");
}

void maxthree(int a, int b, int c)
{
    if (a > b && a > c)
        printf("a is greter than b and c");
    else if (b > c)
        printf("b is greater than a and c.");
    else
        printf("c is greater than a and b.");
}

void evenodd(int a)
{
    if (a % 2 == 0)
        printf("The number is even.");
    else
        printf("The number is odd");
}

int main()
{
    int choice;
    for (choice = 1; choice != 5; choice++)
    {
        printf("1. Positive Negative\n 2. Greater Number\n 3. Max of three\n4. Even odd\n5. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int n;
            printf("Enter the number :");
            scanf("%d", &n);
            positive(n);
            break;
        }

        case 2:
        {
            int x, y;
            printf("Enter the value of Num1 and Num 2 :");
            scanf("%d%d", &x, &y);
            greater(x, y);
            break;
        }

        case 3:
        {
            int x, y, z;
            printf("Enter Num1 and Num2 and Num3 :");
            scanf("%d%d%d", &x, &y, &z);
            maxthree(x, y, z);
            break;
        }

        case 4:
        {
            int n;
            printf("Enter the number :");
            scanf("%d", &n);
            evenodd(n);
            break;
        }

        default:
        {
            printf("Please enter correct choice :");
            break;
        }
        case 5:
        {
            exit(0);
        }
        }
    }
}
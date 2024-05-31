#include <stdio.h>
int prime(int num)
{
    int flag = 0;
    if (num == 0 || num == 1)
        printf("Not a prime number.");
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                return 0;
            else
                return 1;
        }
    }
    return flag;
}

int main()
{
    int num1;
    printf("Enter the number :");
    scanf("%d", &num1);
    if (prime(num1))
        printf("%d is a prime number.", num1);
    else
        printf("%d is not a prime number.", num1);
}
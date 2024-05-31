#include <stdio.h>

int factorial(int num)
{
    int ans = 1;

    if (num <= 0)
    {
        printf("Enter correct value for factorial.");
        return 0;
    }
    else

    {
        for (int i = 1; i <= num; i++)
        {
            ans = ans * i;
        }
    }
    return ans;
}

int main()
{
    int num2, value;
    printf("ENter the number :");
    scanf("%d", &num2);
    value = factorial(num2);
    printf("The value of factorial for %d is %d", num2, value);
    return 0;
}
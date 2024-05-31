#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the range :");
    scanf("%d", &num1);
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++)
    {
        int flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
        }
    }
}
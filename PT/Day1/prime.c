#include <stdio.h>
#include <math.h>
int main()
{
    int a, ans;
    printf("Give us a number :");
    scanf("%d", &a);
    // printf("1");
    int cnt = 1;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            printf("The number is not prime.");
            cnt = 0;
            break;
        }
    }
    if (cnt == 1)
        printf("Number is prime.");
    return 0;
}
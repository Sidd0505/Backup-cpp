#include <stdio.h>
int factors(int n, int num1)
{
    int ans, j, i = 1;
    if (n > num1)
        j = num1;
    else
        j = n;
    while (i <= j)
    {
        if (n % i == 0 && num1 % i == 0)
            ans = i;
        i++;
    }
    return ans;
}

int main()
{
    int num1, num2, sol, ans;
    printf("ENter the number 1 :");
    scanf("%d", &num1);
    printf("ENter the number 2 :");
    scanf("%d", &num2);
    printf("The highest facotr is :%d",factors(num1,num2));
}
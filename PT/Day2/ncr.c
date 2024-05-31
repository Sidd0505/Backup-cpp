#include <stdio.h>
//try it with n =25 r =3
int factorial(int num1)
{
    long ans = 1;

    for (int i = num1; i > 0; i--)
    {
        ans = i * ans;
    }
    return ans;
}

int main()
{
    int n, r, sol, a, b, c, d;
    printf("Enter the value of n :");
    scanf("%d", &n);
    printf("Enter the value of r :");
    scanf("%d", &r);
    if (n > r)
    {
        c = n - r;
        a = factorial(n);
        b = factorial(r);
        d = factorial(c);
        sol = a / (b * d);
        // printf("%d\n%d\n%d",a,b,d);
        printf("The solution is :%d", sol);
        return 0;
    }
    else
    {
        printf("Please put n greater than r");
    }
}
#include <stdio.h>
int hcf(int a, int b)
{
    int c, d=1,ans;
    if (a > b)
        c = b;
    else
        c = a;
    while (d <c)
    {
        if (a % d == 0 && a % d == 0)
        ans =d;
            d++;
    }
    return ans;
}

int main()
{
    int a, b, c, d = 1, ans=1, sol;
    printf("ENter the number 1 :");
    scanf("%d", &a);
    printf("Enter the number 2 :");
    scanf("%d", &b);
    printf("THe HCF of both numbers is %d", hcf(a,b));
}
#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
    int cnt=0;
    int i = n, a = n, b = n, ans = 0, rem;
    while (a > 0)
    {
        a = a / 10;
        cnt++;
    }
    while (i > 0)
    {
        rem = i % 10;
        ans += pow(rem, cnt);
        i = i / 10;
    }
    if (b == ans)
        return 1;

    return 0;
}
int main()
{
    for(int i=1;i<=1000;i++)
    {
        if(armstrong(i))
            printf("%d\n",i);
    }
    return 0;
}
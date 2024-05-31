#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int num1=n,num2=n,num3=n;
    int rem,cnt=0,ans=0;
    // for(int i=num1;i>0;i++)
    // {
    //     i=i/10;
    //     cnt++;
    // }
    while(num1>0)
    {
        num1 = num1/10;
        cnt = cnt+1;
    }
    // printf("THe count is :%d\n",cnt);
    while(num2>0)
    {
        rem = num2%10;
        ans += pow(rem,cnt);
        num2 =num2/10;
    }
    //printf("%d\n",ans);
    if(num3 == ans)
        return 1;
    else
        return 0;
}

int main()
{
    // int num;
    // printf("ENter the number :");
    // scanf("%d",&num);
    for(int i=1;i<1000;i++)
    {
        if(armstrong(i))
        printf("THe number is armstrong %d\n",i);
    // else
    //     printf("THe number is not armstrong.");
    }
}
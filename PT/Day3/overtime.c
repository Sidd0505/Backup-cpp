#include<stdio.h>
int main()
{
    int num,ans=1,a=1;
    printf("Enter the total numbers of employee :");
    scanf("%d",&num);
    while(a<=num)
    {
        int hr =0;
        printf("For employee %d \nhow many hours did he work :\n",num);
        scanf("%d",&hr);
        ans = hr*120;
        printf("The total overtime the %d employee will get paid will be :%d\n",num,ans);
        a++;
    }
    return 0;
}
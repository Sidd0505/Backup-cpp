#include<stdio.h>
/*
int main()
{
    int num1,i=1,ans =0;
    printf("ENter the range :");
    scanf("%d",&num1);
    while(i<=num1)
    {
        if(i%2==0)
        ans = ans+i;
        i++;
    }
    printf("The sum of even numbers is :%d",ans);
    return 0;
}
*/
int main()
{
    int num1;
    printf("Enter the number for which you want table :");
    scanf("%d",&num1);
    int i=1,ans =1;
    while(i<=10)
    {
        ans = num1*i;
        printf("\n%d\t%d cha %d",num1,i,ans);
        i++;
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
/*
void armstrong(int num)
{
    int num1 =num,num2=num,num3=num;
    int ans=0,sol,cnt=0,rem;
    while(num1>0)
    {
        num1 =num1/10;
        cnt++;
    }
    printf("\n%d",cnt);
    while(num2>0)
    {
        rem =num2%10;
        ans = ans+pow(rem,cnt);
        num2 =num2/10;
    }
    if(num3 ==ans)
    {
      printf("The number is armstrong %d\n",ans);
    }
    else
        printf("The number is not armstrong");
}

int main()
{
    int num1;
    printf("Enter the number you want to check :");
    scanf("%d",&num1);
    armstrong(num1);
     //   printf("The number %d is armstrong",num1);
    return 0;
}
*/
int armstrong(int num)
{

    int num1 =num,num2=num,num3=num;
    int ans=0,sol,cnt=0,rem;
    while(num1>0)
    {
        num1 =num1/10;
        cnt++;
    }
    printf("\n%d",cnt);
    while(num2>0)
    {
        rem =num2%10;
        ans = ans+pow(rem,cnt);
        num2 =num2/10;
    }
    if(num3 ==ans)
    {
        
    }
}

int main()
{
    int num1;
    printf("Enter the number you want to check :");
    scanf("%d",&num1);
    armstrong(num1);
     //   printf("The number %d is armstrong",num1);
    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
    int num1,sol,ans=0,a,rem;
    printf("Enter the number :");
    scanf("%d",&num1);
    sol =num1;
    a = num1;
    int cnt=0;
    while(num1>0)
    {
       num1 = num1/10;
        cnt++;
    }
   // printf("Total no. of digits are :%d\n",cnt);
    
    while(sol>0)
    {
        rem =sol%10;
        ans += pow(rem,cnt);
        sol =sol/10;
    }
   // printf("Solution is :%d\n",ans);
    if(a ==ans)
        printf("The number is armstrong.\n");
    else
        printf("Not armstrong.\n");
        
}
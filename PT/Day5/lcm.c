#include<stdio.h>
int lcm(int num1,int num2)
{
    int sol;
     for(int i=1;i<num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
            sol =i;
    }
    return sol;
}
int main()
{
    int num1,num2,sol=0,ans;
    printf("The num1 is :");
    scanf("%d",&num1);
    printf("The num2 is :");
    scanf("%d",&num2);
   
    printf("THe LCM is :%d",lcm(num1,num2));
}
#include<stdio.h>
void print(int n)
{

}

int main()
{
    int num1,num2=0,i=1,ans=0;
    printf("Enter How many times do you want addition :");
    scanf("%d",&num1);
    while(i<=num1)
    {
        num2 =(num2*10)+1;
        printf("%d +",num2);
       // printf("..........");
       ans = ans +num2;
        i++;
    }
    printf("The sum is %d",ans);
}
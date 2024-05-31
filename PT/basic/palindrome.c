#include<stdio.h>
int main()
{
    int num,ans=0,sol=ans;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        ans = ans*10 + num%10;
        num = num/10;
    }
    printf("The number in reverse is :%d\n",ans);
    if(ans==sol)
        printf("The number is palindrome.\n");
    else
        printf("The  number is not palindrome.");
}
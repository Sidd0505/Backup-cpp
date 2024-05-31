#include<stdio.h>
#define num 5
void sum(int arr[]);
int main()
{
    int arr[num];
    for(int i=0;i<=num;i++)
    {
        printf("Enter the number %d",i+1);
        scanf("%d",&arr[i]);
    }
    sum(arr);
}

void sum(int arr[])
{
    int ans=0,sol=0;
    for(int i=0;i<=num;i++)
    {
        if(i%2==0)
            ans += arr[i];
        else
            sol+= arr[i];
    }
    printf("Sum of odd numbers :%d\n",ans);
    printf("Sum of even numbers :%d\n",sol);
}
#include<stdio.h>
int main()
{
    int num,ans=0,sol=0;
    printf("ENter the numbers :");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<=num-1;i++)
    {
        printf("THe number %d is :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=num-1;j++)
    {
        if(j%2==0)
        {
            arr[j] = 2*arr[j];
        }
        else
            arr[j] = arr[j] +10;
    }
    // printf("Enter the answer is :%d\n",ans);
    // printf("Enter the solution is %d",sol);
    for(int k=0;k<=num-1;k++)
    {
        printf("%d\n",arr[k]);
    }
}

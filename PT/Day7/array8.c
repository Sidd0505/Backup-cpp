//count the no of pairs in given array whose sum is greater than a given number x
#include<stdio.h>
int main()
{
    int num,ans;
    printf("Enter the number for which you want to compare :");
    scanf("%d",&ans);
    printf("ENter the limit :");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("ENter the %d :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {

        if(arr[i]+arr[i+1]==ans)
        printf("The pairs are :%d and %d",arr[i],arr[i+1]);

    }
}
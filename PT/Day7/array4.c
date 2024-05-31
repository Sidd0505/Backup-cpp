#include<stdio.h>
int main()
{
    int num, arr[num];
    printf("Enter the size of an array :");
    scanf("%d",&num);
    for(int i=0;i<=num-1;i++)
    {
        printf("Enter %d  :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The reverse of an array is \n");
    for(int i=num-1;i>=0;i--)
    {
        printf("THe reverse of an array is :%d\n",arr[i]);
    }
}
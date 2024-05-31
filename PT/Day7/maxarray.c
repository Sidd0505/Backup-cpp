#include<stdio.h>
int main()
{
    int num,sol,ans;
    printf("ENter how many numbers do you want :");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max =arr[0];

    for(int i=0;i<num;i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    printf("THe maximum is :%d\n",max);

    int min =arr[0];
    for(int j=0;j<num;j++)
    {
        if(min>arr[j])
            min =arr[j];
    }
    printf("The minimum is :%d",min);
}
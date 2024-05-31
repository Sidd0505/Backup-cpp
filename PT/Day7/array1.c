#include<stdio.h>

int main()
{
    int arr[10];
    int ans=0,sol=0;
  //  printf("Enter the array size :");
   // scanf("%d",&n);
    
    for(int i=0;i<10;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i=i+2)
    {
        ans =ans+arr[i];
    }
    printf("The sum of odd numbers :%d\n",ans);
    for(int j=1;j<=9;j=j+2)
    {
        sol = sol+arr[j];
    }
    printf("The sum of even numbers:%d",sol);
    return 0;
}
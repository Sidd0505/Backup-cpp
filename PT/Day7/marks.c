#include<stdio.h>
int main()
{
        int num,sol,ans;
        printf("Enter how many students do you want :");
        scanf("%d",&num);
        int arr[num];
        for(int i=0;i<num;i++)
        {
            printf("Enter the marks of student %d :",i+1);
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<num;j++)
        {
             if(arr[j]<35)
                printf("The roll no. of this student who failed :%d\n",j+1);
        }
    return 0;
}
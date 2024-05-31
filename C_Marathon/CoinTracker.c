#include<stdio.h>
int findcoin(int arr[],int size,int target)
{
    int count =0,index=0;
    for(int i=0;i<size;i++)
    {
        if (arr[i]==target)
        {
            count =1;
            index =i;
        }
        if(count ==1)
        {
            return index;
        }
        if(count ==0)
        {
            for(int i=0;i<size;i++)
            {
                if(arr[i]<target && arr[i+1]>target)
                {
                    return i+1;
                   // printf("Not in array.\n");
                }
            }
        }
        for(int i=0;i<size;i++)
        {
            if(arr[i]==arr[i+1])
            {
                return -1;
            }
        }
        
    }
}
int main()
{
    int arr[4];
    int size =4;
    int target;
    printf("Enter 4 array elements\n");
    scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
    printf("Enter the element you want to search :");
    scanf("%d",&target);
    printf("The intended index is :%d",findcoin(arr,size,target));
    return 0;
}

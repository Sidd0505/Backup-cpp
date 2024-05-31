#include<stdio.h>
#include"header.h"
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
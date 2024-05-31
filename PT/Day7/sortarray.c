#include <stdio.h>
int main()
{
    int num, max;
    printf("Enter the size of an array :");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i <num ; i++)
    {
        printf("Enter the %d number :", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }

    for (int i = 0; i <num ; i++)
    {
        printf("%d\n", arr[i]);
       
    }
}
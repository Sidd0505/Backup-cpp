#include<stdio.h>
#include"header.h"
#define SIZE 5
int display(int arr[]){
    for(int i=0;i<SIZE;i++){
        printf("%d ",arr[i]);
    }
}
int max(int arr[]){
    int m = 0;
    for(int i=0; i<SIZE; i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    printf("Maximum element is %d: ",m);
}
int min(int arr[]){
    int m = 100000;
    for(int i=0; i<SIZE; i++){
        if(arr[i]<m){
            m = arr[i];
        }
    }
    printf("Minimum element is %d: ",m);
}
int modify(int arr[]){
    int pos;
    printf("Enter position to be modified:");
    scanf("%d",&pos);
    if(pos>SIZE && pos<0)
        printf("Enter valid position of array.");
    else
    {   
        printf("Enter the new element:");
        int tem;
        scanf("%d",&tem);
        arr[pos-1]=tem;
        display(arr);
    }
}
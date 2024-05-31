#include<stdio.h>
#include"header.h"
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num>11)
    {
        printf("Please do not exceed the limit.\nEnter the value again :");
        scanf("%d",&num);
        
    }
    struct symboldecoder *s= (struct symboldecoder*)malloc(num*sizeof(struct symboldecoder));
    accept(s, num);
    search(s, num);

    free(s);
    return 0;
    
}
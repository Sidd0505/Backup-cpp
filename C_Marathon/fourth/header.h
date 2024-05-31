#include<stdio.h>
#include<stdlib.h>

struct symboldecoder{
    char symbol;
    int value;
};

void accept(struct symboldecoder *,int );
int search(struct symboldecoder *,int );
#include<stdio.h>
void main(void)
{
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d",**pptr);
}
#include<stdio.h>
void main(void)
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    int fact=1;
    for (int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("Factorial Is : %d\n",fact);
}
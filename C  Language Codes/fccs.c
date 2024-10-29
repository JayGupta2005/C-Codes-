#include<stdio.h>
void sum(int a,int b);
void main(void)
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum(a,b);
}
void sum(int a,int b){
    printf("Sum Is %d",a+b);
}

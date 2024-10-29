#include<stdio.h>
void main(void)
{
    int a,b,temp;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Sweeping: a=%d \n                b= %d",a,b);

}
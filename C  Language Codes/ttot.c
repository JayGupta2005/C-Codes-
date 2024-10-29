#include<stdio.h>
int sum(int a,int b);
void main(void)
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d",&a,&b);
    printf("%d",sum(a,b));
}
int sum(int a,int b){
    int z= a+b;
    printf("%d",z);
    return z;
}
#include<stdio.h>
int sum(int a,int b);
void main(void)
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    printf("Sum Is: %d",sum(a,b));


}
int sum(int a,int b){
    a+b;
    return a+b;
}

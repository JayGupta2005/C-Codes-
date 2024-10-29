#include<stdio.h>
int sum(int a, int b);
void main(void)
{
    int a,b;
    printf("Enter First Number: \n");
    scanf("%d",&a);
    printf("Enter second Number: \n");
    scanf("%d",&b);
    int s; 
    s=sum(a,b);
    printf("Sum Is %d\n",s);
    
}
int sum(int a, int b){
    return a+b;
}
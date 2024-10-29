#include<stdio.h>
int sum(int a, int b);
void main(void)
{
    int a,b;
    printf("Enter First Number: \n");
    scanf("%d",&a); //9
    printf("Enter second Number: \n");
    scanf("%d",&b); //10
    
    int s=sum(a,b); 
    printf("Sum Is %d\n",s);
    
}
int sum(int x, int y){ // 8 9
    return x+y;
    
}
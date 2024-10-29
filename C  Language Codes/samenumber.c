#include<stdio.h>
void main(void)
{
    int a,b;
    printf("Enter first Number: \n");
    scanf("%d",&a);
    printf("Enter Second Number: \n");
    scanf("%d",&b);
    if (a==b){
        printf("Numbers Are Same");
    }
    else {
        printf("Number Are Not Same");
    }
}
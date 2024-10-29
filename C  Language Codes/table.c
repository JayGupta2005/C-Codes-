#include<stdio.h>
void main(void)
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    for(int i=1; i<=10; i++){
        printf("%d\n",a*i);
    }
}
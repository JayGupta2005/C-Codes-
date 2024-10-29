#include<stdio.h>
void main(void)
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    int z;
    for (int i=10;i>0;i--){
        z=i*a;
        printf("%d\n",z);
    }
}
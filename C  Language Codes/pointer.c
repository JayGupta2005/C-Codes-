#include<stdio.h>
void main(void)
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    
    printf("%d\n",_age);
}
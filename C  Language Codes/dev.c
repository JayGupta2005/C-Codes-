#include<stdio.h>
#include<string.h>
void main(void)
{
    char x[20],y[20];
    printf("Enter First String");
    gets(x);
    printf("Enter Second String");
    gets(y);
    strcat(x,y);
    puts(x);
}
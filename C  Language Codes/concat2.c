#include<stdio.h>
#include<string.h>
void main(void)
{
    char x[20],y[20];
    gets(x);
    gets(y);
    strcat(x,y);
    puts(x);
}
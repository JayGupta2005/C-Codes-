#include<stdio.h>
#include<string.h>
void main(void)
{
    char x[20],y[20];
    printf("Enter First word: ");
    gets(x);
    printf("Enter Second word: ");
    gets(y);
    strcat(x,y);
    puts(x);
}
#include<string.h>
#include<stdio.h>
void main( )
{
char st[20];
puts("Enter a String =");
gets(st);
printf("Actual String = %s\n", st);
strrev(st);
printf("Reverse String = %s", st);
}
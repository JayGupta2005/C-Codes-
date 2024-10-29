#include<stdio.h>
//declaration /prototype
void printHello();
void main(void)
{
    printHello();//function call
    printHello();
    printHello();
}
//function definition
void printHello(){
    printf("HELLO\n");
    printf("My Name Is Jay Gupta\n");
}
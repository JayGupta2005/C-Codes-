#include<stdio.h>
void hello();
void goodbye();
void main(void)
{
    hello();
    goodbye(); 
}
void hello(){
    printf("Hello\n");
}
void goodbye(){
    printf("Good bye\n");
}
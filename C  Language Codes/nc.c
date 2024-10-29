#include<stdio.h>
void main(void)
{
    int a,b;
    char ch;
    printf("Enter An Operator (+,-,*,/): ");
    scanf("%c",&ch);
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    switch (ch){
        case '+': 
        printf("Sum Is %d\n",a+b);
        break;
        case '-': 
        printf("Substraction Is %d\n",a-b);
        break;
        case '*': 
        printf("Multiplication Is: %d\n",a*b);
        break;
        case '/': 
        printf("Division Is %d\n",a/b);
        break;   
        default:
        printf("Not a valid Simbol");
    }
}
#include<stdio.h>
#include<conio.h>
void main(void)
{
    printf("Calculator");
    float a,b,c;
    char ch;
    printf("Enter Operator (+,-,*,/): ");
    scanf("%c",&ch);
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter second Number: ");
    scanf("%f",&b);
    switch(ch)
    {
        case '+':c=a+b;
        printf("%f",c);
        break;
        case '-':c=a-b;
        printf("%f",c);
        break;
        case '*':c=a*b;
        printf("%f",c);
        break;
        case '/':c=a/b;
        printf("%f",c);
        break;
        default: printf("Invalid Operator");
        break;
    }


}
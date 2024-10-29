#include<stdio.h>
#include<conio.h>
void main(void)
{
    printf("English World Identifier|\n");
    char ch;
    printf("Enter World: \n");
    scanf("%c",&ch);

    if((ch>='A')&&(ch<='Z')){
        printf("Upper Case Letter ");
    }
    else if((ch>='a')&&(ch<='z')){
        printf("Lower Case Letter");
    }
    else {
        printf("Not English Letter ");
    }
    getch();
}
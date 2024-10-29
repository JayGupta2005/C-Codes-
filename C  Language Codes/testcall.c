#include<stdio.h>
void namaste();
void bonjue();
void notvalid();
void main(void)
{
    printf("Enter Nationality I or F: ");
    char ch;
    scanf("%c",&ch);
    char i;
    if(ch=='i'){
        namaste();
    }
    else if(ch=='f'){
        bonjue();
    }
    else{
        notvalid();
    }

}
void namaste(){
    printf("Namaste\n");
    bonjue();
}
void bonjue(){
    printf("Bonjue");
}
void notvalid(){
    printf("Enter Valid Nationality\n Thank You");
}
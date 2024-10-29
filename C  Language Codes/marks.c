#include<stdio.h>
void main(void){
    int a;
    printf("Enter Marks: ");
    scanf("%d",&a);
    if((a>=30) && (a<=100)){
        printf("Pass");
    }
    else if((a<30)&&(a>=0)){
        printf("Fail");
    }
    else{
        printf("Wrong Marks ");
    }
}
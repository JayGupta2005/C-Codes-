#include<stdio.h>
void main (void){
    int a;
    printf("Enter Year");
    scanf("%d",&a);
    if (a%400==0 || a%4==0 && a%100!=0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
}
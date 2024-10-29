#include<stdio.h>
void main (void){
    int a,i;
    int fact=1;
    printf("Enter A Number");
    scanf("%d",&a);
    for ( i=1;i<=a;i++){
     fact=fact*i;
    }
     printf("%d",fact);
}
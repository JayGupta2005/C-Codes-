#include<stdio.h>
void main (void){
    int i,j,k;
    for (i=1;i<=5;i++){
        for (j=1;j<i;j++){
            printf(" ");
        }
        for (k=i;k<=5;k++){
            printf("*");
        }
        printf("\n");
    }
}
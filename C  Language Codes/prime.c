#include<stdio.h>
void main (void){
    int n,i,count=0;
    printf("Enter number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==2){
        printf("Prime Number");
    }
    else{
        printf("Not A Prime Number");
    }
}
#include<stdio.h>
void main (void){
    int n,r,c,arm=0;
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=r*r*r+arm;
        n=n/10;
    }
    if (c==arm){
        printf("Arm no.");
    }
    else{
         printf("Not Arm No");
    }
}
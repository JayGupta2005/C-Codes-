#include<stdio.h>
int sum(int n);
void main(void)
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1= sum(n-1);
    int sumOn= sumNm1+n;
}

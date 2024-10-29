#include<stdio.h>
int fact(int n);
void main(void)
{
    printf("%d",fact(4));
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int z= fact(n-1);
    int y=z*n;
    

}
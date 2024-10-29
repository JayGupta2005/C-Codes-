#include<stdio.h>
int fab(int a);
void main(void)
{
    int a;
    printf("Enter A Number: ");
    scanf("%d",&a);
    printf("Fibunachi Is: %d",fab(a));
}
int fab(int a){
    char z;
    if(a==0){
        return 0;
    }
    else if (a==1){
        return 1;
    }
    else{
        int c=a-1;
        int z=c+a;
        return z;
    }   
}
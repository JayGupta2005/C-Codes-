#include<stdio.h>
int febi(int a);
void main(void)
{
    int a;
    printf("Enter Number: \n");
    scanf("%d",&a);
    printf("febi is : %d",febi(a));
}
int febi(int a){
        if (a==0){
            return 0;
        }
        if(a==1){
            return 1;
        }
    int c=(a-1);
    int d=(c+a);
    return d;
}
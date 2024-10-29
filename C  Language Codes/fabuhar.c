#include<stdio.h>
int fabu(int a);
void main(void)
{
    printf("Enter A Number: ");
    int a;
    scanf("%d",a);
    printf("%d",fabu(a));
}
int fabu(int a){
    if (a==0){
        printf("Finunachi Is: %d",a);
    }
    else if (a==1){
        printf("Fibunachi Is: %d",a);
    }
    else{
        int c=a-1;
        int z=a+c;
        printf("Fibunachi Is: %d",z);
    }
}

#include<stdio.h>
void main(void)
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a==0){
    printf("Fibunachi Is: %d\n",a);
    }
    else if(a==1){
    printf("Fibunachi Is: %d",a);
    }
    else{
        int c=a-1;
        int z=a+c;
        printf("Fibunachi Is: %d",z);
    }

}
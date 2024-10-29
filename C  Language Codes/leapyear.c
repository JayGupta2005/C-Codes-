#include<stdio.h>
void main(void)
{
    int a;
    printf("Enter Year\n");
    scanf("%d",&a);
    if ((a%400)==0);{
        printf("Leap Year");
    }
    elseif((a%100)==0);{
        printf("Not A Leap Year");
    }
    


}
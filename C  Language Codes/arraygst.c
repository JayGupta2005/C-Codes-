#include<stdio.h>
void main(void)
{
    float price[3];

    printf("Enter First Price: \n");
    scanf("%f",&price[0]);

    printf("Enter Second Price: \n");
    scanf("%f",&price[1]);

    printf("Enter Third Price: \n");
    scanf("%f",&price[2]);

    

    printf("Price With GST\nFirst %f\nSecond %f\nThird %f",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));


}
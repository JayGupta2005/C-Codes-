#include<stdio.h>
float c(float a);
void main(void)
{
    printf("%f",c(4));
}
float c(float a){
    float y= (a)*9/5;
    float z= y+32;
    float m=z;
    return m ;
}
#include<stdio.h>
void gst(float a);
void main(void)
{
    float a;
    printf("Enter Price: ");
    scanf("%f",&a);
    gst(a);
}
void gst(float a){
   printf("%f",a+(0.18*a));
}
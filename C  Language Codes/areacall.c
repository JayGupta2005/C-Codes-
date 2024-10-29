#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);
void main(void)
{
    float a=4;
    float b=5;
    printf("Area Of Rectangle: %f\n",rectangleArea(a,b));
    float rad=4;
    printf("Area Of Circle: %f\n",circleArea(rad));
    float side=2;
    printf("Area Of Square: %f\n",squareArea(side));
  
}
float squareArea(float side){
    return side*side;
}
float circleArea(float rad){
    return 3.14*rad*rad;
}
float rectangleArea(float a, float b){
    return a*b;
}
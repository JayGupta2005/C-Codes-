#include<stdio.h>
float math(float m);
float science(float s);
float san(float sa);
float total(float a);
void main(void)
{
    float m=76;
    printf("Math Marks: %f\n",math(m));
    float s=79;
    printf("Science Marks: %f\n",science(s));
    float sa=79;
    printf("Sans Marks: %f\n",san(sa));
    printf("Overall Percantage: %2f",((math(m)+science(s)+san(sa))/3)*100);
}
float math(float m){
    float y=(m*100)/100;
    return y;
}
float science(float s){
    float z=(s*100)/100;
    return z;
}
float san(float sa){
    float x=(sa*100)/100;
    return x;
}

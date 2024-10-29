#include<stdio.h>
#include<stdbool.h>
void main (void){
    int a;
    float b;
    char c;
    double e;
    long double d;
    bool f;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(e));
    printf("%d",sizeof(f));
}
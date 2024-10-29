#include<stdio.h>
void main(void)
{
    int a;
    printf("Enter Marks Betwwn 0 to 100: ");
    scanf("%d",&a);
    if (a>100){
        printf("Enter Valid Marks");
    }
    else{
        switch(a/3){
            case 3: 
            printf("A++",a); 
            break;
            case 2:
            printf("B++",a);
            break;
            case 1:
            printf("C++",a);
            break;
        }
    }
}
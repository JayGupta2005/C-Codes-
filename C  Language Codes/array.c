#include<stdio.h>
void main(void)
{
    int marks[3];
    printf("Enter physics marks:\n");
    scanf("%d",& marks[0]);
    printf("Enter Math Marks: \n");
    scanf("%d",&marks[1]);
    printf("Enter chem marks: \n");
    scanf("%d",&marks[2]);
    printf("physics = %d \nmath = %d \nchem = %d\n",marks[0],marks[1],marks[2]);

}


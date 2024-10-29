#include<stdio.h>
int table(int n);//or void 
void main(void)
{
    int n;
    printf("Enter Number: \n");
    scanf("%d",&n);
    table(n);

}
int table(int n){
    int i;
    for(i=1;i<=10;i++){

        printf("%d\n",i*n);
    }
    return 0;
}
#include<stdio.h>
void printHw(int hello);
void main(void)
{
  printHw(5);

}
void printHw(int hello){
    if(hello==0){
        return;
    }
    printf("Hello World\n");
    printHw(hello-1);
}
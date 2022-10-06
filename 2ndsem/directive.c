#include<stdio.h>
#include<conio.h>
#define number 2
void main()
{
    #if number==0
    printf("Value of number is %d",number);
    #else
    printf("Invalid condition\n");
    #endif
}
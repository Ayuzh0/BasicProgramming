#include<stdio.h>
#include<conio.h>
#define noinput
void main()
{
    int a=0;
    #ifdef noinput
    a=2;
    #else
    printf("Enter a\n");
    scanf("%d",&a);
    #endif
    printf("Value of a = %d",a);
}
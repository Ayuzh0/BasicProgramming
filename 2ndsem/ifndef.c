#include<stdio.h>
#include<conio.h>
#define num
void main()
{
    int n=0;
    #ifndef num
    n=2;
    #else
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even number\n");
    else
        printf("Odd number\n");
    #endif
    printf("Value of n = %d\n",n);
}
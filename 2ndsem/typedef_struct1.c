#include<stdio.h>
#include<conio.h>
typedef struct sum
{
    int a,b,s;
}su;
void main()
{
    su s1;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&s1.a,&s1.b);
    s1.s=s1.a+s1.b;
    printf("Sum= %d",s1.s);
}
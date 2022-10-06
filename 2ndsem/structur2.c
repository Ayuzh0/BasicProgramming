#include<stdio.h>
#include<conio.h>
struct sum
{
    int a,b,s;
};
void main()
{
    struct sum ob;
    printf("Enter 2 number\n");
    scanf("%d%d",&ob.a,&ob.b);
    ob.s=ob.a+ob.b;
    printf("Sum= %d\n",ob.s);
}
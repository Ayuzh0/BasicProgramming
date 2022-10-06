#include<stdio.h>
#include<conio.h>
struct sum
{
    int a,b,s;
};
struct sum ob;
void sum()
{
    printf("Enter 2 numbers\n");
    scanf("%d%d",&ob.a,&ob.b);
    ob.s=ob.a+ob.b;
    printf("Sum= %d\n",ob.s);
}
void main()
{
    sum();
}

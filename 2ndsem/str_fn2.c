#include<stdio.h>
#include<conio.h>
struct sum
{
    int a,b,s;
};
void add(struct sum ob);
void main()
{
    struct sum su;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&su.a,&su.b);  
    add(su);
}
void add(struct sum ob)
{
    ob.s=ob.a+ob.b;
    printf("Sum= %d\n",ob.s);
}
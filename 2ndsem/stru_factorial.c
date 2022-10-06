#include<stdio.h>
#include<conio.h>
struct factorial
{
    int n,f;
};
void main()
{
    struct factorial ob;
    int i;
    ob.f=1;
    printf("Enter any no.\n");
    scanf("%d",&ob.n);
    for(i=1;i<=ob.n;i++)
        ob.f=ob.f*i;
    printf("Factorial= %d",ob.f);
}
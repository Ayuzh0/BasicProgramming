#include<stdio.h>
#include<conio.h>
void print()
{
    static int a=10;
    static int b=24;
    printf("%d\t%d\n",++a,++b);
}
void main()
{
    print();
    print();
    print();
}

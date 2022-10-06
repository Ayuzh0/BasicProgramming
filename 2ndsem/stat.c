#include<stdio.h>
#include<conio.h>
void main()
{
    void print();
    print();
    print();
    print();
    print();
}
void print()
{
    static int m=5,n=10;
    m+=5;
    n+=5;
    printf("m=%d\n",m);
    printf("n=%d\n",n);
}

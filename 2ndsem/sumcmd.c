#include <stdio.h>
#include<conio.h>
void main(int ar,char *arg[])
{
    int a,b,c,d,e,s;
    a=atoi(arg[1]);
    b=atoi(arg[2]);
    c=atoi(arg[3]);
    d=atoi(arg[4]);
    e=atoi(arg[5]);
    s=a+b+c+d+e;
    printf("Sum= %d\n",s);
    printf("Arguments= %d\n",ar);
    printf("File name= %s",arg[0]);
}
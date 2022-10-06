#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//ignore this
void main()
{
    int n,d1,d3,d5,r1,r2;
    system("cls");//ignore this
    printf("Enter a 5 digit number\n");
    scanf("%d",&n);
    d1=n%10;
    d3=(n/100)%10;;
    d5=n/10000;
    r1=d1*100+d3*10+d5;
    r2=d5*100+d3*10+d1;
    printf("Result1= %d\n",r1);
    printf("Result2= %d\n",r2);
}
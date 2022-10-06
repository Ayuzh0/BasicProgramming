/*WAP to input 2 different numbers and print the result according to oerator*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    typedef int integer;
    typedef char character;
    integer a,b,r;
    character op;
    printf("Enter the 2 numbers\n");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("Enter the operator\n");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        r=a+b;
        break;
    case '-':
        r=a+b;
        break;
    case '*':
        r=a*b;
        break;
    case '/':
        r=a/b;
        break;
    case '%':
        r=a%b;
        break;
    default:
        printf("Invalid operator\n");
        exit(0);
    }
    printf("Result= %d",r);
}
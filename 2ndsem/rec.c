#include<stdio.h>
#include<conio.h>
void main()
{
    int fact(int n);
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factorial= %d\n",fact(n));
}
int fact(int n)
{
    if(n==0)
    {    return 1;
    }
    else
       { return(n*fact(n-1));
       }
}

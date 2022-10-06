//converting decmal number to binary number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b[99],c,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    c=n;
    i=0;
    while(c!=0)
    {
        b[i]=c%2;
        i++;
        c/=2;
    }
    i-=1;
    printf("The binary value of %d is ",n);
    while(i>=0)
    {
        printf("%d",b[i]);
        i--;
    }
}
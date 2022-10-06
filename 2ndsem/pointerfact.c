//factorial
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,s=1,*p,*q,*r; //declaration of variables
    printf("Enter a number\n");
    scanf("%d",&n);
    p=&n;
    q=&s;
    r=&i;
    for((*r)=(*p);(*r)>=1;(*r)--)
        (*q)=(*q)*(*r);
    printf("Factorial= %d",*q);

}

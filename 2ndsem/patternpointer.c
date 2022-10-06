#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,*p,*q,n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    p=&i;
    q=&j;
    for(*p=1;*p<=n;(*p)++)
    {
        for(*q=*p;*q>=1;(*q)--)
            printf("%5d",*q);
        printf("\n");
    }
}    
/*1
  2    1
  3    2    1
  4    3    2    1

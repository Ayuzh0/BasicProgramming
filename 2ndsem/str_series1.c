#include<stdio.h>
#include<conio.h>
struct series
{
    int i,j;
};
void main()
{
    struct series se;
    for(se.i=1;se.i<=5;se.i++)
    {
        for(se.j=1;se.j<=5;se.j++)
            printf("%d",se.j);
        printf("\n");
    }
}
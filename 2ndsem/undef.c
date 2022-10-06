/*defining and undefining number variable but before undefing it was used
by square variable*/
#include<stdio.h>
#include<conio.h>
#define number 15
int sq()
{
    return number*number;
}
#undef number
void main()
{
    printf("answer= %d",sq());
}

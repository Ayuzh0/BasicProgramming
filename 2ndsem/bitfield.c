#include<stdio.h>
#include<conio.h>
struct date 
{
    unsigned int d:5;//31 is 5 bits in size 
    unsigned int m:4;//12 is 4 bits in size
    unsigned int y;
};
void main()
{
    printf("Size of date is %d bytes\n",sizeof(struct date));
    struct date dt= {31,12,2021};
    printf("Date is %d/%d/%d\n",dt.d,dt.m,dt.y);
}

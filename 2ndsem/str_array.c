#include<stdio.h>
#include<conio.h>
struct array
{
    int n,a[20],s;
};
void main()
{
    struct array ob;
    int i;
    ob.s=0;
    printf("Enter the size of the array\n");
    scanf("%d",&ob.n);
    printf("Enter the elements of the array\n ");
    for(i=0;i<ob.n;i++)
        scanf("%d",&ob.a[i]);
    for(i=0;i<ob.n;i++)
        ob.s+=ob.a[i];
    printf("Sum= %d",ob.s);
}
#include<stdio.h>
#include<conio.h>
int i;
void main()
{
    void sum(int n,int m[99]);
    int n,m[99];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    m[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    sum(n,m);
}
void sum(int n, int m[99])
{
    int s=0;
    m[n];
    for(i=0;i<n;i++)
        s+=m[i];
    printf("Sum of the members %d\n",s);
}
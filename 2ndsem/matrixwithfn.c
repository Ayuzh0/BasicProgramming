//Sum of all elements Matrix with function
#include<stdio.h>
#include<conio.h>
int i,j;
void main()
{
    int r,c,a[100][100];
    printf("Enter number of rows and columns\n");
    scanf("%d%d",&r,&c);
    a[r][c];
    void sum(int a[100][100],int r,int c);
    printf("Enter the matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    sum(a,r,c);
}
void sum(int a[100][100],int r, int c)
{
    int s=0;
    a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            s+=a[i][j];
    printf("Sum= %d",s);
}
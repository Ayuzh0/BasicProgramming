#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int a,b,s;
    char fnm[20];
    system("cls");
    printf("Enter file name\n");
    scanf("%s",fnm);
    fp=fopen(fnm,"w");
    printf("Enter first number\n");
    scanf("%d",&a);
    putw(a,fp);
    fprintf(fp,"a=%d\n",a);
    printf("Enter second number\n");
    scanf("%d",&b);
    putw(b,fp);
    fprintf(fp,"b=%d\n",b);
    s=a+b;
    putw(s,fp);
    fclose(fp);
}
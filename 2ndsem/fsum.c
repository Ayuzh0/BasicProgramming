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
    fprintf(fp,"a=%d\n",a);
    printf("Enter second number\n");
    scanf("%d",&b);
    fprintf(fp,"b=%d\n",b);
    s=a+b;
    printf("Sum=%d\n",s);
    fprintf(fp,"sum=%d\n",s);
    fclose(fp);
}


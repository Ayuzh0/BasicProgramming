#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char a[10],b[10],s[10];
    char fnm[20];
    system("cls");
    printf("Enter file name\n");
    scanf("%s",fnm);
    fp=fopen(fnm,"r");
    while(!feof(fp))
    {
    fscanf(fp,"%s",a);
    fscanf(fp,"%s",b);
    fscanf(fp,"%s",s);
    }
    printf("%s",a);
    printf("%s",b);
    printf("%s",s);
    fclose(fp);
}
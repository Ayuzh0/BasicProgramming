#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    system("cls");
    FILE *fp;
    char fnm[20];
    char enm[20],id[20],sal[20];
    printf("Enter file name\n");
    scanf("%s",fnm);
    fp=fopen(fnm,"r");
    while(!(feof(fp)))
    {
        fscanf(fp,"%s",id);
        fscanf(fp,"%s",enm);
        fscanf(fp,"%s",sal);        
    }
    printf("ID=%s\n",id);
    printf("EMPLOYEE=%s\n",enm);
    printf("SALARY=%s\n",sal);
    fclose(fp);
}
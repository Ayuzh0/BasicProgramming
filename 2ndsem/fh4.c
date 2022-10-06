#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char c=' ';
    system("cls");
    fp=fopen("database.txt","w");
    printf("Enter data, entry stops when you press '.'\n ");
    while(c!='.')
    {
        c=getche();
        fputc(c,fp);
    }
    fclose(fp);
    printf("\n content read\n");
    fp=fopen("database.txt","r");
    while(!feof(fp))
    {
        printf("%c",fgetc(fp));
    }
    fclose(fp);
}


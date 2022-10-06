#include<stdio.h>
#include<conio.h>
void main()
{
    char fnm[20],ch;
    FILE *ptr;
    printf("Enter file name\n");
    scanf("%s",fnm);
    ptr=fopen(fnm,"r");
    while(!feof(ptr))
    {
        ch=getc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
}
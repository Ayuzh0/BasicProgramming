#include<stdio.h>
#include<conio.h>
void main()
{
    char fnm[20],ch;
    FILE *ptr;
    system("cls");
    printf("Enter file name\n");
    scanf("%s",fnm);
    ptr=fopen(fnm,"w");
    printf("Enter a single character\n");
    ch=getche();
    getch();
    fputc(ch,ptr);
    fclose(ptr);
    ptr=fopen(fnm,"r");
    printf("\nDisplay data\n");
    while(!feof(ptr))
    {
        ch=getc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);

}
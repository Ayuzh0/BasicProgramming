#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char fnm[20],word[300];
    printf("Enter file name\n");
    gets(fnm);
    fp=fopen(fnm,"r");
    fgets(word,300,fp);
    printf("%s\n",word);
    fclose(fp);
}
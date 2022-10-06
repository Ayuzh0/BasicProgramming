#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char word[3000];
    system("cls");
    fp=fopen("Resume.txt","w");
    printf("Enter Data (each entry should be less than 3000 letters)\n");
    printf("Name: ");
    gets(word);
    fputs("\nName:",fp);
    fputs(word,fp);
    printf("\nDOB: ");
    gets(word);
    fputs("\nDOB:",fp);
    fputs(word,fp);
    printf("\nQualifictaions: ");
    gets(word);
    fputs("\nQualifications:",fp);
    fputs(word,fp);
    printf("\nPrevious Experience : ");
    gets(word); 
    fputs("\nExperience:",fp);
    fputs(word,fp);
    fclose(fp);
    //printing data entry
    printf("Resume:\n");
    fp=fopen("Resume.txt","r");
    while(!feof(fp))
    {
        printf("%s\n",fgets(word,3000,fp));
    }
    fclose(fp);
}
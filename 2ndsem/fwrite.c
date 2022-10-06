/*fwrite function */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
    char roll[20];
    char name[25];
    char marks[20]; 
};
void main() 
{
    FILE *fp;
    char ch;
    struct student stu;
    system("cls");
    fp=fopen("student.dat","w");
    if(fp==NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }
    do
    {
        fflush(stdin);
        printf("\n Enter roll number");
        gets(stu.roll);
        printf("\n Enter name");
        gets(stu.name);
        printf("\n Enter marks");
        gets(stu.marks);
        fwrite(&stu,sizeof(stu),1,fp);
        printf("Do you wish to continue entering data(y,n) \n");
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
    printf("Data written successfully\n");
    fclose(fp);
    fp=fopen("student.dat","r");
    if(fp==NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }
    fp=fopen("student.dat","rb");
    while(fread(&stu,sizeof(stu),1,fp)>0)
    printf("%s %s %s",stu.roll,stu.name,stu.marks);
    fclose(fp);

}
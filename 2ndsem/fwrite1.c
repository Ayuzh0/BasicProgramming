#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int a[10],i;
    system("cls");
    fp=fopen("array1.txt","w");
    if(fp==NULL)
    {
        printf("Error: cannot open file\n");
        exit(0);
    }
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    fwrite(a,sizeof(int),10,fp);
    fclose(fp);
    fp=fopen("array1.txt","r");
    fread(a,sizeof(int),10,fp);
    printf("Array data:\n");
    for(i=0;i<10;i++)
        printf("%d",&a[i]);
    fclose(fp);
}
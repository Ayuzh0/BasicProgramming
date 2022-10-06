#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[20];
    int ch[26];
    int i,j,k,l=0,n;
    puts("Enter a string\n");//Same as printf()~ for string output only
    gets(nm);//Same as scanf()~for string input only
    for(i=0;nm[i]!='\0';i++)
        l++;
    for(i=0;i<26;i++)//for storing the frequency of each letter of the alphabet
        ch[i]=0;
    for(k=0;nm[k]!='\0';k++)//for matching the character with each letter of the alphabet
        for(n=0,i=65,j=97;n<26;i++,j++,n++)
            if(nm[k]==(char)i||nm[k]==(char)j)
                ch[n]++;
    for(i=0;i<26;i++)//for printing the frequency of all characters matched
        if(ch[i]!=0)
            printf("The frequecy of %c = %d\n",(char)(i+65),ch[i]);
}
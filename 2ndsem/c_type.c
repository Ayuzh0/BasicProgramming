#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char n;
    int ch;
    printf("Enter any character\n");
    getche();
    printf("1.islower 2. isUpper 3.toLower 4.toUpper 5.isDigit 6.isAlpha 7.isalnum 8.isspace \n Enter Choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
        if(islower(n))
            printf("True\n");
        else
            printf("False\n");
        break;
        case 2:
        if(isupper(n))
            printf("True\n");
        else
            printf("False\n");
        break;
        case 3:
        printf("Lower: %c",tolower(n));
        break;
        case 4:
        printf("Upper: %c",toupper(n));
        break;
        case 5:
        if(isdigit(n))
            printf("True\n");
        else
            printf("False\n");
        break;
        case 6:
        if(isalpha(n))
            printf("True\n");
        else
            printf("False\n");
        break;
        case 7:
        if(isalnum(n))
            printf("True\n");
        else
            printf("False\n");
        break;
        case 8:
        if(isspace(n))
            printf("True\n");
        else
            printf("False\n");
        break;
        default:
        printf("Invalid choice\n");
    }
}
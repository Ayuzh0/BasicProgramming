#include<stdio.h>
#include<conio.h>
#define add(a,b) (a+b)
#define sub(a,b) (a-b)
#define multi(a,b) (a*b)
#define rem(a,b) (a%b)
#define quo(a,b) (a/b)
void main()
{
    int a,b;
    int ch;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter\n 1 to add\t 2 to substract\n 3 to multiply\n 4 to divide \n 5 to multiply\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Sum= %d",add(a,b));
            break;
        case 2:
            printf("Difference= %d",sub(a,b));
            break;
        case 3:
            printf("Product= %d",multi(a,b));
            break;
        case 4:
            printf("Quotient= %d",quo(a,b));
            break;
        case 5:
            printf("Remainder= %d",rem(a,b));
            break;
        default:
            printf("Invalid Choice\n");
    }
} 
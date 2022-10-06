#include<stdio.h>
#include<conio.h>
#define output printf
#define input scanf
#define curly {
#define i int
#define add (a+b)
#define product(l,b) (l*b)
void main()
curly 
    i a,b;
    output("Enter a and b\n");
    input("%d%d",&a,&b);
    output("Sum= %d\n",add);
    output("Product= %d\n",product(a,b));
}
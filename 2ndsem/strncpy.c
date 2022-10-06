/*strncpy()- performs the same task as strcpy(),the only difference being 
that former function copies specified length of characters from the source
to destination string, whereas the latter function copies the whole source
string to destination  string.
The syntax of strncpy() function
strncpy(destination,source,n);
where n is the argument*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char nm[200],nm1[200];
    int n;
    printf("Enter a string\n");
    gets(nm);
    printf("Enter another string\n");
    gets(nm1);
    printf("Enter number of characters to replace the destination string\n");
    scanf("%d",&n);
    strncpy(nm1,nm,n);
    printf("Source String: %s\n",nm);
    printf("Destination string: %s",nm1);
}
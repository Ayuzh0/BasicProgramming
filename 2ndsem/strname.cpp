//WAP to input a string and check if its a palindrome
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    system("cls");
    char nm[99],nm1[99];
    int i=0,c=0;
    cout<<"Enter a string\n";
    cin>>nm;
    while(nm[i]!='\0')
    {
         c++;
         i++;//alteration
    }
    i=0;
    while(nm[i]!='\0')
    {
        nm1[i]=nm[c-(i+1)];
        i++;
    }
    i=strlen(nm);//where i is an integer and nm is a string
    cout<<"Reverse="<<strrev(nm)<<endl;
    cout<<i<<endl;
    if(nm==strrev(nm))
        cout<<"Palindrome";
    else
        cout<<"Not a palindrome";
    if(nm==nm1)
        cout<<"\nPalindrome";
    else
        cout<<"\nNot a palindrome";
    return 0;
}


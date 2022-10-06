//program to read a long number and print the number of occurrences of each digit in it
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    long n,temp;
    int i,d;
    int dig[10]={0,0,0,0,0,0,0,0,0,0};//for storing number of times a digit occurs
    cout<<"Enter a long number\n";
    cin>>n;
    for(temp=n;temp!=0;temp/=10)
    {
        d=temp%10;
        for (i=0;i<10;i++)
            if(d==i)
                dig[i]++;
    }
    cout<<"The Frequency of the digits are as follows\n";
    for(i=0;i<10;i++)
        if(dig[i]!=0)
            cout<<i<<" - "<<dig[i]<<endl;
    return 0;
}
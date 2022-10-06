#include<iostream>
using namespace std;
int main()
{
    int n,i,l,sl;
    system("cls");//clrscr();
    cout<<"Enter the number of elements\n";
    cin>>n;
    int a[n];//array declaration
    cout<<"Enter the elements of array created\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    l=0,sl=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
            sl=a[i];
    }
    cout<<"\nlargest="<<l;
    cout<<"\nSecond largest number of array= "<<sl;
    return 0;
}
/*
i.WAP to input an array of elements and find the second smallest elememt.

*/
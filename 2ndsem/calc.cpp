//Simple Calculator
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,ch;
    system("cls");
    cout<<"Enter any 2 numbers\n";
    cin>>n1>>n2;
    cout<<"Enter 1 to add, 2 to subtract, 3 to multiply, 4 to divide and 5 to remainder"<<endl;
    cin>>ch;
    if(ch==1)
        cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
    else if(ch==2)
        cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
    else if(ch==3)
        cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;    
    else if(ch==4)
        cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
    else if(ch==5)
        cout<<n1<<"%"<<n2<<"="<<n1%n2<<endl;
    else
        cout<<"Invalid Choice\n";    
    return 0;
}

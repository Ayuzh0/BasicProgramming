#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int i,j,c=0;
    long n,temp;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(temp=n;temp!=0;temp/=10)
        c++;
    int num[c];
    cout<<"number of digits "<<c<<endl;
    for(temp=n,i=0;temp!=0;temp/=10,i++)//entering the digits into array
        num[i]=temp%10;
    for(i=0;i<c-1;i++)
        for(j=0;j<c-i-1;j++)
            if(num[j]<num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
    for(i=0,temp=0;i<c;temp=temp*10+num[i],i++);
    cout<<"Largest possible number= "<<temp<<endl;
    return 0;
}
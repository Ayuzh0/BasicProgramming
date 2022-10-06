#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int i,j,c=0;
    long n,temp,result=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(temp=n;temp!=0;temp/=10)
        c++;
    int num[c];
    cout<<"number of digits "<<c<<endl;
    for(temp=n,i=0;temp!=0;temp/=10,i++)//entering the digits into array
        num[i]=temp%10;
    for(i=0;i<c-1;i++)//bubble sort of the array containing the digits 
        for(j=0;j<c-i-1;j++)
            if(num[j]>num[j+1])//swapping
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
    //Checking if the array formed begins with 0(A number's first digit can't be zero)
    if(num[0]==0)
    { 
        num[0]=num[1];
        num[1]=0;
    }
    for(i=0;i<c;i++)
    {
        result=result*10+num[i];
    }
    cout<<"Largest possible number= "<<result<<endl;
    return 0;
}
/*
Binary Search: Search a sorted array by repeatedly dividing the search interval in half. 
Begin with an interval covering the whole array. If the value of the search key is less than the item 
in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. 
Repeatedly check until the value is found or the interval is empty.
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,i,j,l,r,mid,temp,flag,x,pos;
    cout<<"Enter the size of array \n";
    cin>>n;
    int ar[n];
    cout<<"Enter the members of the array\n";
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)  
            if(ar[j]<ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
    cout<<"The sorted array is as follows:\n";
    for(i=0;i<n;i++)
        cout<<ar[i]<<"\t";
    cout<<"\nEnter the element to be searched \n";
    cin>>x;
    flag=0;
    for(l=0,r=n-1;l<=r;)
    { //  WAP to perform binary search in an array sorted in descending order
        mid=(l+r)/2;
        if(ar[mid]==x)
        {
            pos=mid;
            flag=1;
            break;
        }
        if(ar[mid]<x)
            r=mid-1;
        if(ar[mid]>x)
            l=mid+1;
    }
    if(flag==1)
        cout<<x<<" has been found at index ="<<pos;
    else
        cout<<x<<" not found";
    return 0;
}
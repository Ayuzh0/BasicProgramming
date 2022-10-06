#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter size of an array\n";
    cin>>s1;
    int ar1[40];
    ar1[s1];
    cout<<"Enter the members of the array\n";
    for(int i=0;i<s1;i++)
    {
        cin>>ar1[i];
    }
    cout<<"Enter size of another array\n";
    cin>>s2;
    int ar2[40];
    ar2[s2];
    cout<<"Enter the members of the array\n";
    for(int i=0;i<s2;i++)
    {
        cin>>ar2[i];
    }
    s3=s1+s2;
    int ar3[80];
    ar3[s3];
    for(int i=0;i<s3;i++)
    {
        if(i<s1)
            ar3[i]=ar1[i];
        else
            ar3[i]=ar2[i-s1];
    }
    cout<<"Merged array\n";
    for(int i=0;i<s3;i++)
    {
        cout<<ar3[i]<<"\t";
    }
}
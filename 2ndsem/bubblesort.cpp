#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,i,j,temp,flag=0;
    cout<<"Enter the number of elements \n";
    cin>>n;
    int ar[n];
    cout<<"Enter the members of array\n";
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n-1;i++)
    {   
         for(j=0;j<n-i-1;j++)
        {
            flag=0;
            if(ar[j]<ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    cout<<"Descending order\n";
    for(i=0;i<n;i++)
        cout<<ar[i]<<"\t";
    return 0;
}
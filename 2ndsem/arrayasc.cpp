#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int i,j,min_pos,tmp,n;
    int a[10];
    cout<<"Enter number of elements in array\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    //sorting by ascending order
    for(i=0;i<n;i++)
    {
        min_pos=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min_pos])
                min_pos=j;
        tmp=a[i];
        a[i]=a[min_pos];
        a[min_pos]=tmp;
    }
    cout<<"Ascending order\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}







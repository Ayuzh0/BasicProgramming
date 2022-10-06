//3D
#include<iostream>
using namespace std;
int main()
{
    int m[10][10][10],i,j,k,n1,n2,n3;
    cout<<"Enter n1,n2,n3\n";
    cin>>n1>>n2>>n3;
    m[n1][n2][n3];
    cout<<"Enter 3D\n";
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n2;k++)
            {
                cin>>m[i][j][k];
            }
        }
    }
    cout<<"3D:\n";
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n3;k++)
            {
                cout<<m[i][j][k]<<"\t";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
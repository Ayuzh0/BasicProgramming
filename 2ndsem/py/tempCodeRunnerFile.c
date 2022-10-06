#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter r and c\n";
    cin>>r>>c;
    int m1[r][c],m2[c][r];
    cout<<"Enter matrix\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>m[i][j];
        cout<<"Display matrix \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
              cout<<m1[i][j];   
        cout<<endl;
     }
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
           m2[i][j]=m1[j][i]);
    cout<<"Transpose matrix\n";
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
              cout<<m2[i][j];   
        cout<<endl;
     }
}

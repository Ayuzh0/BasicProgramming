#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int m1[20][20];
    cout<<"Enter the number of rows \n ";
    cin>>r;
    cout<<"Enter the number of columns\n";
    cin>>c;
    m1[r][c];
    cout<<"Enter the members of matrix\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>m1[i][j];
    cout<<"the members of matrix\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<m1[i][j];
            cout<<"\t";
        }    
        cout<<endl;
    }
    cout<<"Transpose\n";
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<m1[j][i];
            cout<<"\t";
        }    
        cout<<endl;
    }
}
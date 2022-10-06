/*1.WAP to input a string and check if its in standard format.  A89A
[ standard format means the first character of the string must be in capital 
and the rest of the characters must be small.]
2. WAP to input a string and change it into uppercase.
3. WAP to input a string and change it into lowercase.
4. WAP to input 2 strings and print all characters found in both of them.
5. WAP to input 2 arrays and print its union.
6. WAP to input 2 arrays and print its intersection array.
7. WAP to input 2 strings and print which will come first in the dictionary.
*/
#include<iostream>
using namespace std;
//this function finds the the union of two 'sorted' arrays 
int main()
{
    int i,j=0,k=0,l=0,m=0,n1,n2;
    int a1[99],a2[99],a3[99];
    system("cls");
    cout<<"Enter the size of the first array\n";
    cin>>n1;
    a1[n2];
    cout<<"Enter the first array\n";
    for(i=0;i<n1;i++)
        cin>>a1[i];
    cout<<"Enter the size of the second array\n";
    cin>>n2;
    a2[n2];
    cout<<"Enter the second array\n";
    for(i=0;i<n2;i++)
        cin>>a2[i];
    for(i=0;i<n1;i++)
        if(m < a1[i])
            m=a1[i];
    for(i=0;i<n2;i++)
        if(m < a2[i])
            m=a2[i];
    for(i=0;i<=m;i++)
    {
        if(i==a1[j])
        {
            if(i==a2[k])
            {
                a3[l]=a1[j];
                j++;
                k++;
                l++;
            }
            else
            {
                a3[l]=a1[j];
                j++;
                l++;
            }
        }
        else if(i==a2[k])
            {
                a3[l]=a2[k];
                k++;
                l++;
            }
    }
    cout<<"Union of the two arrays is as follows:\n";
    for(i=0;i<l;i++)
        cout<<a3[i]<<"\t";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=2*n-2;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }
        for(int l=0;l<i;l++)
        {
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        {
            cout<<" ";
        }
        for(int l=0;l<n-i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
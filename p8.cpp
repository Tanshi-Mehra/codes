#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        for(int k=n-i-1;k>0;k--)
        {
            cout<<" ";
        }
        for(int k=2*i+1;k>0;k--)
        {
            cout<<"*";

        }
         for(int k=n-i-1;k>0;k--)
        {
            cout<<" ";
        }
        cout<<endl;

    }
}
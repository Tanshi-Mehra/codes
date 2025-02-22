#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            temp+=1;
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}
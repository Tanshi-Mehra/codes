#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    // to enter the number of queries
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<"the occurence of the number is";
        cout<<hash[num];
    }

}
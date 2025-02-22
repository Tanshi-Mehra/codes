#include<bits/stdc++.h>
using namespace std;
void rev(int i,int j,int n,int arr[])
{
    if(i>=j)
    return;
    swap(arr[i],arr[j]);
    rev(i+1,j-1,n,arr);
}
int main()
{
    int n;
    cout<<"enter the number of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    rev(i,j,n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
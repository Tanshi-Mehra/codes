#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>left(n);
    vector<int>right(n);
    left[0]=v[0];
    right[n-1]=v[n-1];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],v[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],v[i]);
    }
    int water_trap=0;
    for(int i=0;i<n;i++)
    {
        int temp=min(left[i],right[i]);
        int z=temp-v[i];
        if(z<0)
        {
            water_trap+=0;
        }
        else{
            water_trap+=z;
        }
    }
    cout<<water_trap;
    // water trapping problem



}
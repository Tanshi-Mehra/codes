#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int vis[],vector<int>adjlis[])
{
    vis[node]=1;
    for(auto&it:adjlis[node])
    {
        if(!vis[it])
        {
            dfs(it,vis,adjlis);
        }
    }
}
void numberofprovinces(int v,vector<int>adjlis[])
{
    int vis[v+1]={0};
    int count=0;
    for(int i=1;i<=v;i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,adjlis);
            count++;
        }
    }
    cout<<"the number of provinces are"<<count;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int>adjlis[v+1];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlis[u].push_back(v);
        adjlis[v].push_back(u);
    }
    numberofprovinces(v,adjlis);
}
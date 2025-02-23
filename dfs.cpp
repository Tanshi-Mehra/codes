#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],int vis[],vector<int>&lis)
{
    vis[node]=1;
    lis.push_back(node);
    for(auto &it:adj[node])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis,lis);
        }
    }
}
vector<int>dfsofgraph(int V,vector<int>adj[])
{
    int vis[V+1]={0};
    vector<int>lis;
    int start=1;
    dfs(start,adj,vis,lis);
    return lis;
}
int main()
{
    int V,M;
    cout<<"enter the number of node and edges";
    cin>>V>>M;
    vector<int>adj[V+1];
    for(int i=0;i<M;i++)
    {
        int u,v;
        cout<<"enter the edge";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
       
    }
    vector<int>lis=dfsofgraph(V,adj);
    for(int i=0;i<lis.size();i++)
    {
        cout<<lis[i]<<"->";
    }
    return 0;

}
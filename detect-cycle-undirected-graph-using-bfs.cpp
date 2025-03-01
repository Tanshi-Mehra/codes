#include<bits/stdc++.h>
using namespace std;
bool detect(int src,vector<int>&vis,vector<int>adj[])
{
    vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src,-1});
    while(!q.empty())
    {
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto&adjacentnode:adj[node])
        {
            if(!vis[adjacentnode])
            {
                vis[adjacentnode]=1;
                q.push({adjacentnode,node});
            }
            else{
                if(adjacentnode!=parent)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
bool solve(int v,vector<int>adj[])
{
    vector<int>vis(v+1,0);
    for(int i=1;i<=v;i++)
    {
        if(!vis[i])
        {
            if(detect(i,vis,adj))
            {
                return true;
            }
        }
    }
    return false;

}
int main()
{
    int n,m;
    cout<<"enter the number of vertex and edges";
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   if(solve(n,adj))
   {
    cout<<"cycle is detected";
   }
   else{
    cout<<"cycle is not present";
   }


}
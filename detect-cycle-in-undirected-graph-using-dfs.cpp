#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,int parent,vector<int>adj[],int vis[])
{
    vis[node]=1;
    for(auto &it:adj[node])
    {
        if(!vis[it])
        {
           if( dfs(it,node,adj,vis))
           {
            return true;
           }
        }
        else if(it!=parent){
            return true;
        }
    }
    return false;
}
bool detectcycle(int v,vector<int>adj[])
{
   int vis[v]={0};
   for(int i=0;i<v;i++)
   {
    if(vis[i]==0)
    {
        if(dfs(i,-1,adj,vis)==true)
        {
            return true;
        }
    }

   }
   return false;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    if(detectcycle(v,adj))
    {
        cout<<"cycledetected"<<endl;
    }
    else{
        cout<<"No cycle detected";
    }
    return 0;
}
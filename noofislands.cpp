#include<bits/stdc++.h>
using namespace std;
void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&adj)
{
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int n=adj.size();
    int m=adj[0].size();
    while(!q.empty())
    {
        int row=q.front().first;
        int col=q.front().second;
        
    }
}
int nofisland(vector<vector<int>>&adj)
{
    int count=0;
    int n=adj.size();
    int m=adj[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int row=0;row<n;row++)
    {
        for(int col=0;co<m;col++)
        {
            
            if(!vis[row][col]&&adj[row][col]='1')
            {
                 count++;
                bfs(row,col,vis,adj);
            }
        }
    }
    return count;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>adj(n,vector<char>(m,'0'));
    for(int i=0;i<m;i++)
    {
        char u,v;
        cin>>u>>v;
        adj[u][v]='1';
        adj[v][u]='1';
       int iland= nofisland(adj);

    }
    cout<<"the number of islands are"<<iland;
}
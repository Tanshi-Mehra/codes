#include<bits/stdc++.h>
using namespace std;
void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&adj)
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
        q.pop();
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                int nrow=row+i;
                int ncol=col+j;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]&&adj[nrow][ncol]=='1')
                {
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}
int nofisland(vector<vector<char>>&adj)
{
    int count=0;
    int n=adj.size();
    int m=adj[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            
            if(!vis[row][col]&&adj[row][col]=='1')
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
    vector<vector<char>>adj(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];

        }
    }
   int iland= nofisland(adj);

    cout<<"the number of islands are"<<iland;
}
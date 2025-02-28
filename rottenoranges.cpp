#include<bits/stdc++.h>
using namespace std;
int rottenoranges(vector<vector<int>>&adj)
{
    int n=adj.size();
    int m=adj[0].size();
    vector<vector<int>>vis(n,vector<int>(m));
    queue<pair<pair<int,int>,int>>q;
    int tm=0;
    int delrow[]={-1,0,1,0};
     int delcol[]={0,1,0,-1};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(adj[i][j]==2)
            {
                q.push({{i,j},0});
                vis[i][j]=2;
            }
            else
            {
                vis[i][j]=0;
            }
        }
    }
    while(!q.empty())
    {
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        q.pop();
    
          tm=max(tm,t);
        for(int i=0;i<4;i++)
        {
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&adj[nrow][ncol]==1&&vis[nrow][ncol]==0)
            {
                q.push({{nrow,ncol},t+1});
                vis[nrow][ncol]=2;
            }
        }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(adj[i][j]==1&&vis[i][j]==0)
                {
                    return -1;
                }
            }
        }
        return tm;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];
        }
    }
   int timetorotfresh= rottenoranges(adj);
   cout<<timetorotfresh<<"units of time"<<endl;
}
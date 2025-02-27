#include<bits/stdc++.h>
using namespace std;
void dfs(int row,int col,int newcolor,vector<vector<int>>&adj,vector<vector<int>>&ans,int delrow[],int delcol[],int initialcol)
{
    ans[row][col]=newcolor;
    int n=adj.size();
    int m=adj[0].size();
    for(int i=0;i<4;i++)
    {
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&adj[nrow][ncol]==initialcol&&ans[nrow][ncol]!=newcolor)
        {
            dfs(nrow,ncol,newcolor,adj,ans,delrow,delcol,initialcol);

        }
    }
}
vector<vector<int>>floodfill(int sr,int sc,int newcolor,vector<vector<int>>&adj)
{
    int initialcol=adj[sr][sc];
    vector<vector<int>>ans=adj;
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    dfs(sr,sc,newcolor,adj,ans,delrow,delcol,initialcol);
    return ans;

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
    int sr,sc,newcolor;
    cout<<"enter the initial color";
    cin>>sr>>sc;
    cout<<"enter the newcolor to be apply";
    cin>>newcolor;
   vector<vector<int>>ans= floodfill(sr,sc,newcolor,adj);
   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[0].size();j++)
    {
        cout<<ans[i][j];
    }
    cout<<endl;
   }
}

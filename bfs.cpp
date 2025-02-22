#include<bits/stdc++.h>
using namespace std;
void bfs(int N,vector<int>adj[])
{
    int visarr[N+1]={0};
    vector<int>bfs;
    visarr[1]=1;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto &it:adj[node])
        {
            if(!visarr[it])
            {
                visarr[it]=1;
                q.push(it);

            }
        }
    }
    cout<<"the level order trversal is";
    for(int i=0;i<bfs.size();i++)
    {
        cout<<bfs[i]<<"->";

    }
}
int main()
{
    int n;
    int m;
    cout<<"Enter the number of nodes and edges"<<endl;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int a,b;
        cout<<"enter the edges";
        cin>>a>>b;
        adj[a].push_back(b);
        
    }
   bfs(n,adj);
    return 0;

        
}
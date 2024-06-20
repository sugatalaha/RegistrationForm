#include<bits/stdc++.h>
using namespace std;

void dfs1(vector<int> adj[],int node,stack<int> &sp,vector<int> &vis)
{   
    vis[node]=1;
    for(auto it:adj[node])
    {  
        if(!vis[it])
        {
            dfs1(adj,it,sp,vis);
        }
    }
    sp.push(node);
}

void dfs2(vector<int> adj[],int node,vector<int> &vis)
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            dfs2(adj,it,vis);
        }
    }
}

int Kosaraju(vector<vector<int>> &edges,int n)
{   
    vector<int> adj1[n];
    for(int i=0;i<edges.size();i++)
    {
        adj1[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int> vis(n);
    stack<int> sp;
    dfs1(adj1,0,sp,vis);
    vector<int> adj2[n];
    for(int i=0;i<edges.size();i++)
    {
        swap(edges[i][0],edges[i][1]);
    }
    for (int i = 0; i < edges.size(); i++)
    {
        adj2[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int> vis2(n,0);
    int ans=0;
    while(!sp.empty())
    {
        int t=sp.top();
        sp.pop();
        if(!vis2[t])
        {
            ans++;
            dfs2(adj2,t,vis2);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> edges;
    edges.push_back({0,1});
    edges.push_back({1,2});
    edges.push_back({2, 0});
    edges.push_back({1, 3});
    edges.push_back({3, 4});
    edges.push_back({4,5});
    edges.push_back({5, 3});
    edges.push_back({4, 6});
    edges.push_back({6, 8});
    edges.push_back({7, 8});
    edges.push_back({6, 7});
    cout<<"No. of SCCs is "<<Kosaraju(edges,9)<<endl;
}
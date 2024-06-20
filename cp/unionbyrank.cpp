#include<vector>
#include<iostream>
using namespace std;

class disjoint_set
{
    vector<int> rank,par;
    public:
    disjoint_set(int n)
    {
        rank.resize(n+1,0);
        par.resize(n+1);
        for(int i=1;i<=n;i++)
        {
            par[i]=i;
        }
    }
    int findparent(int u)
    {
        if(u==par[u])return u;
        return par[u]=findparent(par[u]);
    }
    void form_union(int u,int v)
    {
        int ulp_u=findparent(u);
        int ulp_v=findparent(v);
        if(ulp_u==ulp_v)return ;
        else if(rank[ulp_u]>rank[ulp_v])
        {
            par[ulp_v]=ulp_u;
        }
        else if(rank[ulp_u]<rank[ulp_v])
        {
            par[ulp_u]=ulp_v;
        }
        else
        {
            par[ulp_u]=ulp_v;
            rank[ulp_v]++;
        }
    }
};

int main()
{
    disjoint_set dis(7);
    dis.form_union(1,2);
    dis.form_union(2,3);
    dis.form_union(4,5);
    dis.form_union(6,7);
    dis.form_union(5,6);
    // If 3 and 7 belong to the same component or not!
    if(dis.findparent(3)==dis.findparent(7))
    {
        cout<<"Same component\n";
    }
    else
    {
        cout<<"Not same component\n";
    }
    dis.form_union(3,7);
    if (dis.findparent(3) == dis.findparent(7))
    {
        cout << "Same component\n";
    }
    else
    {
        cout << "Not same component\n";
    }
}
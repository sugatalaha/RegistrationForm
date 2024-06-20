#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second-p1.first<p2.second-p2.first;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end(),compare);
        vector<int> ans(n,0);
        for(int i=1;i<n;i++)
        {
            if(v[i].second<v[i].first)
            {
                ans[i]=ans[i-1]+1;
            }
        }
        cout<<ans[n-1]<<endl;
    }
}
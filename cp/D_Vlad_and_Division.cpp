#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(auto it:v)
        {
            mp[it]++;
        }
        int x=0;
        for(auto it:v)
        {
            if(mp[it] && mp[INT_MAX^it])
            {
                x++;
                mp[INT_MAX^it]--;
                mp[it]--;
            }
        }
        for(auto it:mp)
        {
            if(it.second)
            {
                x+=it.second;
            }
            // cout<<it.first<<" "<<it.second<<endl;
        }
        // cout<<endl;
        cout<<x<<endl;
    }
}
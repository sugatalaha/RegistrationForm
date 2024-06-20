#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<"Yes"<<endl;
    }
    else if(mp.size()>2)
    {
        cout<<"No"<<endl;
    }
    else
    {
        if(n%2!=0)
        {
            vector<int> a;
            for(auto i:mp)
            {
                if(a.size()==0 || i.first!=a.back())
                {
                    a.push_back(i.first);
                }
            }
            if(abs(mp[a[0]]-mp[a[1]])==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            vector<int> a;
            for(auto i:mp)
            {
                if(a.size()==0 || i.first!=a.back())
                {
                    a.push_back(i.first);
                }
            }
            if(mp[a[0]]==mp[a[1]])
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
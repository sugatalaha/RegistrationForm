#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    unordered_map<int,int>  mp;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        mp[a]++,mp[b]++,mp[c]++;
        if(mp[a]==1)
        {
            cout<<a<<endl;
        }
        else if(mp[b]==1)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
        mp.clear();
    }
}
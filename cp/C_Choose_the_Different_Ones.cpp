#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        vector<int> a(x),b(y);
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<y;i++)
        {
            cin>>b[i];
        }
        unordered_map<int,int> mp1,mp2;
        for(auto it:a)
        {
            if(it>=1 && it<=k)
            {
                mp1[it]++;
            }
        }
        for(auto it:b)
        {
            if(it>=1 && it<=k)
            {
                mp2[it]++;
            }
        }
        if(mp1.size()>=k/2 && mp2.size()>=k/2)
        {
            set<int> s;
            for(auto it:mp1)
            {
                s.insert(it.first);
            }
            for(auto it:mp2)
            {
                s.insert(it.first);
            }
            if(s.size()>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        unordered_map<int,int> mp;
        vector<int> ind;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]==2 && ind.size()<2)ind.push_back(i);
        }
        int count=0;
        for(auto i:mp)
        {
            if(i.second>=2)
            {
                count++;
            }
        }
        if(count<2)
        {
            cout<<-1<<endl;
        }
        else   
        {   
            vector<int> b(n,1);
            b[ind[0]]=2,b[ind[1]]=3;
            for(int i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
}
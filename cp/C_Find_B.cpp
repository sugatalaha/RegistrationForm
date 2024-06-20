#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long int> a(n+1,0);
        vector<pair<int,int>> queries(q);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>queries[i].first;
            cin>>queries[i].second;
        }
        for(int i=1;i<=n;i++)
        {
            a[i]+=a[i-1];
        }
        for(int i=0;i<q;i++)
        {
            int len=queries[i].second-queries[i].first+1;
            int l=queries[i].first;
            int r=queries[i].second;
            if(l==r)
            {
                cout<<"NO"<<endl;
            }
            else if(a[r]-a[l-1]>2*len)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
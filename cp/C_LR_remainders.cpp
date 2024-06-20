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
        int m;
        cin>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        int l=0,r=n-1;
        vector<int> a;
        for(auto c:s)
        {
            if(c=='L')
            {
                a.push_back(v[l++]);
            }
            else
            {
                a.push_back(v[r--]);
            }
        }
        int p=1;
        vector<int> ans;
        for(int i=v.size()-1;i>=0;i--)
        {
            p=(p*a[i])%m;
            ans.push_back(p);
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

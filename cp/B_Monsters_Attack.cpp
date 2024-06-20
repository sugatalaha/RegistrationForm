#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),x(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({abs(x[i]),a[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        bool f=true;
        while(!v.empty())
        {
            int bullets=k;
            if(v.back().first==0)
            {
                f=false;
                break;
            }
            else
            {
                int i=v.size()-1;
                while(i>=0 && bullets>0)
                {
                    if(v[i].second<=bullets)
                    {
                        bullets-=v[i].second;
                        v[i].second=0;
                    }
                    else
                    {
                        v[i].second-=bullets;
                        bullets=0;
                    }
                    i--;
                }
                while(v.back().second==0)
                {
                    v.pop_back();
                }
                for (int j = v.size() - 1; j >= 0; j--)
                {
                    v[j].first = max(v[j].first - 1, 0);
                }
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
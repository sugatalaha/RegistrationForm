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
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v[i].first=a,v[i].second=b;
        }
        int upper_l=INT_MAX,lower_l=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(v[i].first==1)
            {
                lower_l=max(lower_l,v[i].second);
            }
            else if(v[i].first==2)
            {
                upper_l=min(upper_l,v[i].second);
            }
        }
        if(upper_l<lower_l)
        {
            cout<<0<<endl;
        }
        else
        {
            int req_nums=upper_l-lower_l+1;
            for(int i=0;i<n;i++)
            {
                if(v[i].first==3)
                {
                    if(v[i].second>=lower_l && v[i].second<=upper_l)
                    {
                        req_nums--;
                    }
                }
            }
            cout<<max(req_nums,0)<<endl;
        }
    }
}
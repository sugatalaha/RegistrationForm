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
        char c;
        cin>>c;
        vector<string> v(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];
        }
        // sort(v.begin(),v.end());
        int count=0;
        for(auto p:v)
        {
            if(p[1]==c)
            {
                count++;
            }
        }
        vector<pair<string,string>> ans;
        for(int i=0;i<2*n;i++)
        {
            if(v[i][1]==c)
            {
                for(int j=0;j<2*n;j++)
                {
                    if(v[i][1]!=v[j][1])
                    {
                        ans.push_back({v[j],v[i]});
                        count--;
                        break;
                    }
                }
            }
        }
        if(count==0)
        {
            
        }
    }
}
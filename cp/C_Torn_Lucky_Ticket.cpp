#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

int main()
{   
    long long int n;
    cin>>n;
    vector<string> temp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        temp.push_back(s);
    }
    long long int ans=0;
    vector<pair<int,string>> v;
    for(auto i:temp)
    {   
        v.push_back({i.length(),i});
    }
    sort(v.begin(),v.end());
    vector<vector<long long int>> mp(50,vector<long long int>(11,0));
    temp.clear();
    for(auto i:v)
    {
        int len=i.first;
        string s=i.second;
        int tot=0;
        for(auto j:s)
        {
            tot+=j-'0';
        }
        for(int tot_len=len+2-len%2;tot_len<=10;tot_len+=2)
        {
            int a=0,b=0;
            if(tot_len>2*len)
            {
                break;
            }
            for(int k=0;k<len-tot_len/2;k++)
            {
                a+=s[k]-'0';
                b+=s[len-k-1]-'0';
            }
            ans+=mp[(tot-2*a)%50][(tot_len-len)%11];
            ans+=mp[(tot-2*b)%50][(tot_len-len)%11];
        }
        ans++;
        mp[tot%50][len%11]++;
    }
    cout<<ans<<endl;
}
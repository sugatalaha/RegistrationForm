#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int maxi=0;
        char max_c;
        for(auto i:mp)
        {
            if(maxi<i.second)
            {
                maxi=i.second;
                max_c=i.first;
            }
        }
        int c=0;
        for(auto i:mp)
        {
            if(max_c!=i.first)
            {
                c+=i.second;
            }
        }
        if(maxi>=c)
        {
            cout<<maxi-c<<endl;
        }
        else
        {
            cout<<(c-maxi)%2<<endl;
        }
    }
}
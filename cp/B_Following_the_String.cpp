#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                for(char c='a';c<='z';c++)
                {
                    if(mp.find(c)==mp.end())
                    {
                        ans+=c;
                        mp[c]++;
                        break;
                    }
                }
            }
            else
            {
                for(auto it:mp)
                {
                    if(it.second==arr[i])
                    {
                        ans+=it.first;
                        mp[it.first]++;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
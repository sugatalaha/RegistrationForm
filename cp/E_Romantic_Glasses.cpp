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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int sum=0;
        unordered_map<long long int,int> mp;
        mp[0]++;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum+=arr[i];
                if(mp.find(sum)!=mp.end())
                {
                    flag=true;
                    break;
                }
            }
            else
            {
                sum-=arr[i];
                if(mp.find(sum)!=mp.end())
                {
                    flag=true;
                    break;
                }
            }
            mp[sum]++;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
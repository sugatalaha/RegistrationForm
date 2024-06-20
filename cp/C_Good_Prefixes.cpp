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
        vector<long long int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int sum=0,count=0;
        unordered_map<long long int,long long int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            sum+=arr[i];
            if(sum%2==0)count+=(mp.find(sum/2)!=mp.end());
        }
        cout<<count<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> arr(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end(),compare);
        vector<int> pre(n+1,0);
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+arr[i-1];
        }
        int maxi=INT_MIN;
        for(int r=0;r<=k;r++)
        {
            maxi=max(maxi,sum-2*(pre[min(n,x+r)]-pre[r]));
            sum-=arr[r];
        }
        cout<<maxi<<endl;
    }
}
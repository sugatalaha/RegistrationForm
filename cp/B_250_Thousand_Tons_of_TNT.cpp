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
        vector<long long> prefix_sum(n,0);
        prefix_sum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            prefix_sum[i]=prefix_sum[i-1]+arr[i];
        }
        long long int max_ans=0;
        
        for(int k=1;k<=n;k++)
        {   
            if(k==n)
            {
                max_ans=max(max_ans,(long long int)0);
                continue;
            }
            else if(n%k)
            {
                continue;
            }
            else
            {
                int i=-1,j=k-1;
                long long int maxi=0,mini=INT_MAX;
                while(j<n)
                {
                    if (i == -1)
                    {
                        maxi = max(maxi, prefix_sum[j]);
                        mini = min(mini, prefix_sum[j]);
                    }
                    else
                    {
                        maxi=max(maxi,prefix_sum[j]-prefix_sum[i]);
                        mini=min(mini,prefix_sum[j]-prefix_sum[i]);
                    }
                    i+=k;
                    j+=k;
                }
                max_ans=max(max_ans,maxi-mini);
            }
        }
        cout<<max_ans<<endl;
    }
}
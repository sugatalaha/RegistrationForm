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
        long long sum=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            int u;
            cin>>u;
            arr[i]=u;
            sum+=u;
        }
        if(sum%3==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int ways1=3-sum%3;
            int ways2=INT_MAX,x=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]%3==sum%3)
                {
                    ways2=1;
                    break;
                }
            }
            cout<<min(ways2,ways1)<<endl;
        }
    }
}
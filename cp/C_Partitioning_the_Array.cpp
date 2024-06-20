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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                int k=n/i,g=0;
                for(int j=0;j<k;j++)
                {
                    int diff=0;
                    for(int l=j;l<n;l+=k)
                    {
                        diff=__gcd(diff,abs(v[j]-v[l]));
                    }
                    g=__gcd(g,diff);
                }
                ans+=(g!=1);
            }
        }
        cout<<ans<<endl;
    }
}
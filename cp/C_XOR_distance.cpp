#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,r;
        cin>>a>>b>>r;
        if(r==0)
        {
            cout<<abs(a-b)<<endl;
            continue;
        }
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(a<b)
        {
            swap(a,b);
        }
        int first_bit=1;
        long long ans=abs(a-b);
        long long int d=0;
        for(int i=59;i>=0;i--)
        {
            if(((1ll<<i)&a) && !((1ll<<i)&b))
            {   
                if(first_bit)
                {
                    first_bit=0;
                }
                else if(d+(1ll<<i)<=r)
                {   
                    a^=(1ll<<i);
                    b^=(1ll<<i);
                    d+=(1ll<<i);
                }
            }
        }
        cout<<min(abs(a-b),ans)<<endl;
     }
}
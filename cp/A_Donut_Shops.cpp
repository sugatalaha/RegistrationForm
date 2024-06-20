#include<bits/stdc++.h>
using namespace std;

long long int give_ceil(long long int x,long long int b)
{
    if(x%b==0)
    {
        return x/b;
    }
    return (x/b)+1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int ans1=-1;
        if(a<give_ceil(1,b)*c)
        {
            ans1=1;
        }
        long long int ans2=-1;
        if(a*b>c)
        {
            ans2=b;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}
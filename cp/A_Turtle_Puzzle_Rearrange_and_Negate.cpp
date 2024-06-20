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
        for(int i=0;i<n;i++)
        {
            int u;
            cin>>u;
            sum+=abs(u);
        }
        cout<<sum<<endl;
    }
}
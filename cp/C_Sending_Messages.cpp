#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        long long int sum=0;
        vector<int> m(n);
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
        }
        int st=0;
        for(int i=0;i<n;i++)
        {
            sum+=min((long long )a*(m[i]-st),(long long )b);
            st=m[i];
        }
        if(sum<0 || sum>=f)
        {
            cout<<"NO"<<endl;
        }
        else if(sum<f)
        {
            cout<<"YES"<<endl;
        }
    }
}
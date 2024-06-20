#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            sum+=x;
        }
        float root=sqrt((float)sum);
        if(root==(int)root)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
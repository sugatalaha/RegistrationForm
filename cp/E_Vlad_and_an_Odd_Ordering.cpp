#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(2*k<=(n+1))
        {
            cout<<2*k-1<<endl;
        }
        else
        {
            long long int mod_k=k-(n+1)/2;
            cout<<4*mod_k-2<<endl;
        }
    }
}
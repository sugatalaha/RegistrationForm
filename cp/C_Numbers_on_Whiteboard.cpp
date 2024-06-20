#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int a=n-1,b=n;
    cout<<2<<endl;
    for(int i=1;i<=n-1;i++)
    {
        cout<<a<<" "<<b<<endl;
        b=(a+b)/2+(a+b)%2;
        a--;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
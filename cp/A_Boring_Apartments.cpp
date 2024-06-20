#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int x=s[0]-'0';
    int len=s.length();
    cout<<10*(x-1)+len*(len+1)/2<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
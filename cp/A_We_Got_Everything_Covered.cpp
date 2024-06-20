#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string ans;
        for(char c='a';c<'a'+k;c++)
        {
            ans+=c;
        }
        string x=ans;
        for(int i=1;i<n;i++)
        {
            ans+=x;
        }
        cout<<ans<<endl;
    }
    return 0;   
}
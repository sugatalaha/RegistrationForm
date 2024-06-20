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
        if(n<=28)
        {
            string ans="aa";
            ans+=(n-3+'a');
            cout<<ans<<endl;
        }
        else if(n>28 && n<=52)
        {
            string ans="a";
            ans+=(n-28+'a');
            ans+="z";
            cout<<ans<<endl;
        }
        else
        {   
            string ans;
            ans+=(n-53+'a');
            ans+="zz";
            cout<<ans<<endl;
        }
    }
}
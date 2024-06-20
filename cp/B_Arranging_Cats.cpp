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
        string s,f;
        cin>>s;
        cin>>f;
        int del=0;
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (f[i] == '1')
            {
                c2++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!=f[i])
            {
                del++;
            }
            if(s[i]==f[i] && s[i]=='1')
            {
                c1--;
                c2--;
            }
        }
        if(c1==c2)
        {
            cout<<c1<<endl;
        }
        else if(c1<c2)
        {
            cout<<del-c1<<endl;
        }
        else
        {
            cout<<del-c2<<endl;
        }
    }
}
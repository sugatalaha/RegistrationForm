#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string s,t;
        cin>>s;
        cin>>t;
        bool flag=false;
        for(int i=0;i<x-1;i++)
        {
            if(s[i]==s[i+1])
            {
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        flag=false;
        for(int i=0;i<y-1;i++)
        {
            if(t[i]==t[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"No"<<endl;
            continue;
        }
        int count1=0;
        for(int i=0;i<x-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count1++;
            }
        }
        int count=0;
        for(int i=0;i<x-1;i++)
        {
            if(s[i]==s[i+1] && s[i]!=t[0] && s[i+1]!=t[y-1])
            {
                count++;
            }
        }
        if(count1==count)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        cout<<s<<endl;
        exit(0);
    }
    vector<int> fre(26,0);
    for(auto i:s)
    {
        fre[i-'a']++;
    }
    for(auto i:fre)
    {
        if(i%n)
        {
            cout<<"-1"<<endl;
            exit(0);
        }
    }
    string ele;
    for(int i=0;i<26;i++)
    {
        int x=fre[i]/n;
        for(int j=0;j<x;j++)
        {
            ele.push_back(i+'a');
        }
    }
    string ans;
    for(int i=0;i<n;i++)
    {
        ans+=ele;
    }
    cout<<ans<<endl;
}
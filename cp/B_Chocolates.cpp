#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    vector<int> v(s,0);
    for(int i=0;i<s;i++)
    {
        cin>>v[i];
    }
    long long  int sum=v[s-1];
    int last=v[s-1]-1;
    for(int i=s-2;i>=0;i--)
    {
        last=min(last,v[i]);
        sum+=last;
        last=max(last-1,0);
    }
    cout<<sum<<endl;
}
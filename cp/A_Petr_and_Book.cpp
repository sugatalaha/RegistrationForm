#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ans(7);
    for(int i=0;i<7;i++)
    {
        cin>>ans[i];
    }
    for(int i=0;i<7;i=(i+1)%7)
    {
        if(n<=ans[i])
        {
            cout<<i+1<<endl;
            break;
        }
        else
        {
            n-=ans[i];
        }
    }
}
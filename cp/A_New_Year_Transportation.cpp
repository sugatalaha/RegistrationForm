#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    if(t==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        queue<int> q;
        q.push(1);
        while(!q.empty())
        {
            int newlocation=q.front()+v[q.front()];
            q.pop();
            if(newlocation==t)
            {
                cout<<"YES"<<endl;
                exit(0);
            }
            else if(newlocation<t)q.push(newlocation);
            else
            {
                cout<<"NO"<<endl;
                exit(0);
            }
        }
    }
}
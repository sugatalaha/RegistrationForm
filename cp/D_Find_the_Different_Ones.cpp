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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int q;
        cin>>q;
        vector<pair<int,int>> queries(q);
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            queries[i]={x,y};
        }
        set<int> s;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]!=arr[i])
            {
                s.insert(i);
            }
        }
        for(auto it:queries)
        {
            auto ind=s.lower_bound(it.first);
            if(*ind<it.first)
            {
                cout<<-1<<" "<<-1<<endl;
            }
            else if(*ind+1>it.second)
            {
                cout<<-1<<" "<<-1<<endl;
            }
            else
            {
                cout<<*ind<<" "<<*ind+1<<endl;
            }
        }
        cout<<endl;
    }
}

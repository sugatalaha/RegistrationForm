#include<bits/stdc++.h>
using namespace std;

bool can_sort(vector<int> &b)
{
    int n=b.size();
    for(int i=1;i<n;i++)
    {   
        if(b[i]<0 && ((i&(i-1))!=0))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        vector<int> b(n+1);
        for(int i=1;i<n;i++)
        {
            b[i]=arr[i+1]-arr[i];
        }
        if(can_sort(b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
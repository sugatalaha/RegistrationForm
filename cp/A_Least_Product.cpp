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
        int negs=0,zeros=0,pos=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                negs++;
            }
            else if(arr[i]==0)
            {
                zeros++;
            }
        }
        if(negs%2 || zeros)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
    }
}
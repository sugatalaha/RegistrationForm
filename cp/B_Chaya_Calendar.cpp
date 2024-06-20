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
        int prev_yr=arr[0];
        for(int i=1;i<n;i++)
        {
            prev_yr=(prev_yr/arr[i]+1)*arr[i];
        }
        cout<<prev_yr<<endl;
    }
}
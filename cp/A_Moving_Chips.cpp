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
        int maxi=-1,mini=n,c=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                maxi=max(maxi,i);
                mini=min(mini,i);
                // count++;
            }
        }
        for(int i=mini;i<=maxi;i++)
        {
            if(arr[i]==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
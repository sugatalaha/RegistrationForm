#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=0,mini=INT_MAX;
    int ind_maxi,ind_mini;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==maxi)
        {
            ind_maxi=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==mini)
        {
            ind_mini=i;
            break;
        }
    }
    if(ind_maxi<ind_mini)
    {
        cout<<ind_maxi+n-1-ind_mini<<endl;
    }
    else if(ind_maxi==ind_mini)
    {
        cout<<0<<endl;
    }
    else
    {
        int shift_max=ind_maxi;
        int shift_min=n-2-ind_mini;
        cout<<shift_max+shift_min<<endl;
    }
}
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
        int ans1=0,ind=n;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {   
                ind=i;
                break;
            }
        }
        ans1=n-ind;
        int ans2=0,ind2=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]!=arr[i+1])
            {
                ind2=i;
                break;
            }
        }
        ans2=ind2+1;
        int ans3=INT_MAX;
        if(arr[0]==arr[n-1])
        {
            int ind3=0,ind4=n-1;
            for(int i=1;i<n;i++)
            {
                if(arr[i]!=arr[i-1])
                {
                    ind3=i;
                    break;
                }
            }
            for(int i=n-2;i>=0;i--)
            {
                if(arr[i]!=arr[i+1])
                {
                    ind4=i;
                    break;
                }
            }
            ans3=(ind4-ind3+1);
        }
        cout<<min({ans1,ans2,ans3})<<endl;
    }
}
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
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i]) % 2 == abs(arr[i - 1]) % 2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            int maxi = INT_MIN;
            int max_sum=0;
            for(int i=0;i<n;i++)
            {
                max_sum=max_sum+arr[i];
                maxi=max(maxi,max_sum);
                max_sum=max(0,max_sum);
            }
            cout<<maxi<<endl;
        }
        else
        {   
            int maxi=INT_MIN;
            for(int i=0;i<n;i++)
            {
                int sum=arr[i];
                for(int j=i+1;j<n;j++)
                {
                    maxi = max(maxi, sum);
                    if(abs(arr[j-1])%2==abs(arr[j])%2)
                    {
                        break;
                    }
                    sum+=arr[j];
                }
            }
            cout<<maxi<<endl;
        }
    }
}
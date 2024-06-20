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
        int size=2*n;
        vector<int> nums(size);
        for(int i=0;i<size;i++)
        {
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        vector<int> ans[n];
        for(;i<n;i++)
        {
            ans[i].push_back(nums[i]);
        }
        for(;i<size;i++)
        {
            ans[i-n].push_back(nums[i]);
        }
        int sum=0;
        i=0,j=1;
        while(j<n)
        {
            sum+=abs(ans[i][0]-ans[j][0])+abs(ans[i][1]-ans[j][1]);
            i++;
            j++;
        }
        cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }
    }
}
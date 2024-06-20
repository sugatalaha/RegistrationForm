#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int i=0,j=1;
    int maxi=1;
    while(j<n)
    {
        if(nums[j]>nums[j-1])
        {
            maxi=max(maxi,j-i+1);
        }
        else
        {
            i=j;
        }
        j++;
    }
    cout<<maxi<<endl;
}
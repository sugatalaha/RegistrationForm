#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr)
{   
    unordered_map<int,int> mp;
    int sum=0;
    for(auto it:arr)
    {   
        sum+=it;
    }
    int c=0;
    int target=sum/arr.size();
    for(int i=0;i<arr.size();i++)
    {
        c+=arr[i]-target;
        if(c>0)
        {
            arr[i]-=c;
        }
        else if(c<0)
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(solve(arr))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

vector<int> find_maxSum(vector<int> &arr)
{
    int start=-1,ansStart=-1,ansEnd=-1;
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum+=arr[i];
        if(maxi<sum)
        {
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return {ansStart,ansEnd};
}
int main()
{
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> ans=find_maxSum(arr);
    for(int i=ans[0];i<=ans[1];i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
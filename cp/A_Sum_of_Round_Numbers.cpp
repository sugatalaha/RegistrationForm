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
        vector<int> arr;
        while(n)
        {
            arr.push_back(n%10);
            n=n/10;
        }
        int count=0;
        for(auto i:arr)
        {
            if(i!=0)
            {
                count++;
            }
        }
        reverse(arr.begin(),arr.end());
        cout<<count<<endl;
        int s=arr.size();
        for(int i=0;i<s;i++)
        {
            if(arr[i]!=0)
            {
                cout<<arr[i]*pow(10,(s-1-i))<<" ";
            }
        }
        cout<<endl;
    }
}
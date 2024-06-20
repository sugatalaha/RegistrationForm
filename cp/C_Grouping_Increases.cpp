#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        for(int i=0;i<len;i++)
        {
            cin>>arr[i];
        }
        int t1=INT_MAX,t2=INT_MAX;
        int c=0;
        for(int i=0;i<len;i++)
        {
            if(t1>t2)
            {
                swap(t1,t2);
            }
            if(arr[i]<=t1)
            {
                t1=arr[i];
            }
            else if(arr[i]<=t2)
            {
                t2=arr[i];
            }
            else
            {
                t1=arr[i];
                c++;
            }
        }
        cout<<c<<endl;
    }
}
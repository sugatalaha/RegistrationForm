#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%2)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            int c=1,ele=arr[0];
            for(int i=1;i<n;i++)
            {
                if(arr[i]==ele)
                {
                    c++;
                }
            }
            if(c==n)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}
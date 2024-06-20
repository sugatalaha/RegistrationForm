#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum+=(b-a);
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<4;i++)
        {
            int x,y;
            cin>>x>>y;
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        int area=(maxi-mini)*(maxi-mini);
        cout<<area<<endl;
    }
}
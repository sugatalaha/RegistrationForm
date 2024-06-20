#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char arr[3][3];
        int r,c;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='?')
                {
                    r=i,c=j;
                }
            }
        }
        unordered_map<char,int> mp;
        for(int i=0;i<3;i++)
        {
            mp[arr[i][c]]++;
        }
        char pool[]={'A','B','C'};
        char ans;
        for(int i=0;i<3;i++)
        {
            if(mp.find(pool[i])==mp.end())
            {
                ans=pool[i];
            }
        }
        cout<<ans<<endl;
    }
}
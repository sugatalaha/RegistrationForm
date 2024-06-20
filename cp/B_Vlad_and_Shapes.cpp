#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        vector<vector<char>> grid(r,vector<char>(r,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                cin>>grid[i][j];
            }
        }
        // for(int i=0;i<r;i++)
        // {
        //     for(int j=0;j<r;j++)
        //     {
        //         cout<<grid[i][j];
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        bool flag=false;
        for(int i=0;i<r;i++)
        {
            int count=0;
            for(int j=0;j<r;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                }
            }
            if(count==1)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"TRIANGLE"<<endl;
        }
        else
        {
            cout<<"SQUARE"<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>> mat(n,vector<char>(m,'.'));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }
        int start_row,start_col,end_row,end_col;
        for(int i=0;i<n;i++)
        {
            bool f=false;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='#')
                {
                    f=true;
                    start_row=i+1,start_col=j+1;
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            bool f=false;
            for(int j=m-1;j>=0;j--)
            {
                if(mat[i][j]=='#')
                {
                    f=true;
                    end_row=i+1,end_col=j+1;
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }
        int mid_row=(start_row+end_row)/2,mid_col=(start_col+end_col)/2;
        cout<<mid_row<<" "<<mid_col<<endl;
    }
}
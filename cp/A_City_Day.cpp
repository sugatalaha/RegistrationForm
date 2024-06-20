#include<bits/stdc++.h>
using namespace std;

bool is_pos(int ind,vector<int> &days,int x,int y,int n)
{
    bool flag=true;
    for(int i=ind-x;i<ind;i++)
    {
        if(i>=1 && days[i]<days[ind])
        {
            flag=false;
            break;
        }
    }
    bool flag2=true;
    for(int i=ind+1;i<=ind+y;i++)
    {
        if(i<=n && days[i]<days[ind])
        {
            flag2=false;
            break;
        }
    }
    return flag&flag2;
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> days(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>days[i];
    }
    for(int ind=1;ind<=n;ind++)
    {   
        if(is_pos(ind,days,x,y,n))
        {   
            cout<<ind<<endl;
            exit(0);
        }
    }
}
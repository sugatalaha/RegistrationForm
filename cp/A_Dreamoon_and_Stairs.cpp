#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int maxi=n,mini=(n/2)+(n%2);
    for(int i=mini;i<=maxi;i++)
    {
        if(i%m==0)
        {
            cout<<i<<endl;
            exit(0);
        }
    }
    cout<<-1<<endl;
}
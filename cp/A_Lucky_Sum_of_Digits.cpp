#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=-1;
    for(;a<=n/4;a++)
    {
        if((n-4*a)%7==0)
        {
            b=(n-a)/7;
            break;
        }
    }
    if(b==-1)
    {
        cout<<-1<<endl;
    }
    else
    {
        string s;
        for(int i=0;i<a;i++)
        {
            s+="4";
        }
        for(int i=0;i<b;i++)
        {
            s+="7";
        }
        cout<<s<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='1'|| s.back()=='1')
        {
            cout<<2*n<<endl;
        }
        else
        {
            int count=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='1')count+=2;
                else
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}
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
        int start;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
            {
                start=i;
                break;
            }
        }
        int end;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                end=i;
                break;
            }
        }
        cout<<end-start+1<<endl;
    }
}
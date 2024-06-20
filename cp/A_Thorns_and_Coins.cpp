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
        int count=0;
        int i=0;
        while(i<n)
        {
            if(i<n-1 && s[i+1]=='@')
            {
                i++;
                count++;
            }
            else if(i<n-1 && s[i+1]=='.')
            {
                i++;
            }
            else if(i<n-1 && s[i+1]=='*')
            {
                if(i<n-2 && s[i+2]!='*')
                {
                    if(s[i+2]=='@')
                    {
                        count++;
                    }
                    i+=2;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int neg=0,pos=0;
        int len;
        cin>>len;
        string s;
        cin>>s;
        for(auto it:s)
        {
            if(it=='-')
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        cout<<abs(neg-pos)<<endl;
    }
}
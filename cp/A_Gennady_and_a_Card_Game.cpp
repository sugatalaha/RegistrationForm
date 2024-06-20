#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> v(5);
    cin>>s;
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    for(auto x:v)
    {
        if(s[0]==x[0]|| s[1]==x[1])
        {
            cout<<"YES"<<endl;
            exit(0);
        }
    }
    cout<<"NO"<<endl;
}
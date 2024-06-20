#include<bits/stdc++.h>
using namespace std;

void func(string &t)
{
    if(t.length()==1)
    {
        st.insert(t);
        return;
    }
    if(st.find(t)!=st.end())
    {
        return;
    }
    char c=t[0];
    t.erase(t.begin());
    st.insert(t);
    func(st,t);
    t=c+t;
    c=t[1];
    t.erase(t.begin()+1);
    st.insert(t);
    func(st,t);
}
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        string s;
        cin>>s;
        set<string> s;
        for(int i)
    }
}
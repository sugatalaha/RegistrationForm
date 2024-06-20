#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k>>m;
        string s;
        cin>>s;
        set<char> st;
        string ans;
        for(auto it:s)
        {
            st.insert(it);
            if(st.size()==k)
            {
                st.clear();
                ans+=it;
            }
        }
        if(ans.length()>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {   
            char ch;
            for(char c='a';c<'a'+k;c++)
            {
                if(st.find(c)==st.end())
                {
                    ch=c;
                    break;
                }
            }
            while(ans.length()<n)
            {
                ans+=ch;
            }
            cout<<"NO"<<endl;
            cout<<ans<<endl;
        }
    }
}
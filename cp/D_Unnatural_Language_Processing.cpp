#include<bits/stdc++.h>
using namespace std;

bool vowel(char c)
{
    return (c=='a')||(c=='e');
}
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
        string t;
        for(int i=0;i<n;i++)
        {
            if(!vowel(s[i]))
            {
                t.push_back(s[i]);
            }
            else
            {
                if(i<n-2 && vowel(s[i+2]))
                {
                    t.push_back(s[i]);
                    t.push_back('.');
                }
                else if(i<n-1)
                {
                    t.push_back(s[i]);
                    t.push_back(s[i+1]);
                    i++;
                    t.push_back('.');
                }
            }
        }
        if(vowel(s.back()))
        {
            t.push_back(s.back());
        }
        if(t.back()=='.')
        {
            t.pop_back();
        }
        cout<<t<<endl;
    }
}
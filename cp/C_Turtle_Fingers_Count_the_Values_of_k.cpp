#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,l;
        cin>>a>>b>>l;
        unordered_set<long long> s;
        for(int i=0;;i++)
        {   
            bool flag=false;
            if(l<pow(a,i))
            {
                break;
            }
            for(int j=0;;j++)
            {
                if(pow(a,i)*pow(b,j)<=l)
                {   
                    long long div=pow(a,i)*pow(b,j);
                    if(l%div==0)
                    {
                        s.insert(l/div);
                    }
                }
                else
                {
                    break;
                }
            }
        }
        cout<<s.size()<<endl;
    }
}
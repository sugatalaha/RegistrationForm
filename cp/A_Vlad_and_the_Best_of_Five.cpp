#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count1=0,count2=0;
        for(auto c:s)
        {
            if(c=='A')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if(count1>count2)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
}
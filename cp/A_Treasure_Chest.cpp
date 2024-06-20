#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int chest,key,sta;
        cin>>chest>>key>>sta;
        if(chest>=key)
        {
            cout<<chest<<endl;
        }
        else
        {
            if(key-chest<=sta)
            {
                cout<<key<<endl;
            }
            else
            {
                cout<<chest+sta+2*(key-chest-sta)<<endl;
            }
        }
    }
}
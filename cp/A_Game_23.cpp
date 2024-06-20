#include<bits/stdc++.h>
using namespace std;

int main()
{
    int src,dest;
    cin>>src>>dest;
    if(dest%src!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        int change=dest/src;
        int steps=0;
        int num=2;
        while(change>1)
        {
            if(change%2==0)
            {
                change=change/2;
                steps++;
            }
            else if(change%3==0)
            {
                change=change/3;
                steps++;
            }
            else if(change>1)
            {
                cout<<-1<<endl;
                exit(0);
            }
        }
        cout<<steps<<endl;
    }
    return 0;
}
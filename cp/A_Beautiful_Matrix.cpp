#include<bits/stdc++.h>
using namespace std;

int main()
{   
    pair<int,int> pos;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                pos={i,j};
            }
        }
    }
    int steps=abs(3-pos.first)+abs(3-pos.second);
    cout<<steps<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            cout<<"HARD"<<endl;
            exit(0);
        }
    }
    cout<<"EASY"<<endl;
}
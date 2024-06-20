#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    float x=b/a;
    for(int i=0;;i++)
    {
        if(pow(1.5,i)>x)
        {
            cout<<i<<endl;
            break;
        }
    }
}
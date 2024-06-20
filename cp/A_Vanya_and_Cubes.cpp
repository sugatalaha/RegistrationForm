#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int maxi=1;
    for(int i=1;;i++)
    {
        long long int x=i*(i+1)*(i+2);
        if(x/6>n)
        {
            cout<<maxi<<endl;
            break;
        }
        else
        {
            maxi=max(maxi,i);
        }
    }
    return 0;
}
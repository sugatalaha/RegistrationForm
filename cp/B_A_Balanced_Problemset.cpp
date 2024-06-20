#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        if(n==x)
        {
            cout<<1<<endl;
        }
        else
        {
            int i = sqrt(x);
            int res = 1;
            while (i >= 1)
            {

                // If i is a factor of N
                if (x % i == 0)
                {
                    if (i >=n)
                        res = max(res, x / i);

                    if (x / i >=n)
                        res = max(res, i);
                }
                i--;
            }
            cout<<res<<endl;
        }
    }
}
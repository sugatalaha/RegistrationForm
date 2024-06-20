#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int t;
    cin>>t;
    vector<int> ans(200001);
    ans[1] = 1;
    for (int i = 2; i <=200001; i++)
    {
        int s = 0;
        int x = i;
        while (x)
        {
            s += x % 10;
            x /= 10;
        }
        ans[i] = s + ans[i - 1];
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}

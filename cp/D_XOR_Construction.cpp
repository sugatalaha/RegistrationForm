#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    vector<int> b(n);
    b[1]=a[0];
    for(int i=2;i<n;i++)
    {
        b[i]=b[i-1]^a[i-1];
    }
    int mod=2*n;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]%n<<" ";
    }
    cout<<endl;
}
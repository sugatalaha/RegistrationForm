#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    cout<<max(0,(w*(w+1)/2)*k-n)<<endl;
}
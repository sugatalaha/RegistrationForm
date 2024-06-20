#include<bits/stdc++.h>
using namespace std;

void ip(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        ip(a),ip(b);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long int diff=0;
        int i=0,j=n-1,s=0,e=m-1;
        while(i<=j)
        {   
            if(abs(a[i]-b[e])>abs(a[j]-b[s]))
            {
                diff+=abs(a[i]-b[e]);
                e--;
                i++;
            }
            else
            {
                diff+=abs(a[j]-b[s]);
                s++;
                j--;
            }
        }
        cout<<diff<<endl;
    }
}
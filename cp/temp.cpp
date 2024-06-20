#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;
    string ans;
    for(int i=0;i<num.length();i++)
    {   
        if(i==0 && num[i]=='9')
        {
            ans.push_back(num[i]);
        }
        else if(num[i]>='5')
        {
            ans.push_back('9'-num[i]+'0');
        }
        else
        {
            ans.push_back(num[i]);
        }
    }
    cout<<ans<<endl;
}
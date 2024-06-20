#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;
    string ans;
    for(auto i:num)
    {
        if(i>='5')
        {
            ans.push_back('9'-i+'0');
        }
        else
        {
            ans.push_back(i);
        }
    }
    cout<<ans<<endl;
}
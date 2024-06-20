#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	vector<int> arr = { 1, 2, 32, 21 };
	int ans=0;
	for(int i=1;i<arr.size();i++)
	{
		ans=ans|arr[i];
	}
	cout<<ans<<endl;
}
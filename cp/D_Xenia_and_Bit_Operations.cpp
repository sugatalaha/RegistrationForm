#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
class SegmentTree
{
    public:
    vector<int> seg;
    SegmentTree(int n)
    {
        seg = vector<int>(4 * n + 1);
    }
    int build(vector<int> &arr, int ind, int low, int high,int level)
    {
        if (low == high)
        {
            return seg[ind] = arr[low];
        }
        int mid = (low + high) >> 1;
        int x = build(arr, 2 * ind + 1, low, mid,!level);
        int y = build(arr, 2 * ind + 2, mid + 1, high,!level);
        if(level==0)
        {
            return seg[ind]=(x^y);
        }
        else
        {
            return seg[ind]=(x|y);
        }
    }
    void update(int ind, int low, int high, int i, int val,int level)
    {
        if (low == high)
        {
            seg[ind] = val;
            return;
        }
        int mid = (low + high) >> 1;
        if (i <= mid)
        {
            update(2 * ind + 1, low, mid, i, val,!level);
        }
        else
        {
            update(2 * ind + 2, mid + 1, high, i, val,!level);
        }
        if(level==0)
        {
            seg[ind]=(seg[2*ind+1]^seg[2*ind+2]);
        }
        else{
            seg[ind]=(seg[2*ind+1]|seg[2*ind+2]);
        }
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(pow(2,n));
    for(int i=0;i<pow(2,n);i++)
    {
        cin>>arr[i];
    }
    int height=n;
    SegmentTree ds=SegmentTree(pow(2,n));
    if(n%2)ds.build(arr,0,0,arr.size()-1,1);
    else
    {
        ds.build(arr,0,0,arr.size()-1,0);
    }
    for(int j=0;j<m;j++)
    {
        int ind;
        cin>>ind;
        int val;
        cin>>val;
        if(n%2)ds.update(0,0,arr.size()-1,ind-1,val,1);
        else{
            ds.update(0,0,arr.size()-1,ind-1,val,0);
        }
        cout<<ds.seg[0]<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
class SegmentTree
{
    vector<int> seg;
    public:
    SegmentTree(int n)
    {
        seg=vector<int>(4*n+1);
    }
    int build(vector<int> &arr,int ind,int low,int high)
    {   
        if(low==high)
        {
            return seg[ind]=arr[low];
        }
        int mid=(low+high)>>1;
        int x=build(arr,2*ind+1,low,mid);
        int y=build(arr,2*ind+2,mid+1,high);
        return seg[ind]=min(x,y);
    }
    int query(int ind,int low,int high,int l,int r)
    {
        if(high<l || low>r)
        {
            return INT_MAX;
        }
        else if(low>=l && high<=r)
        {
            return seg[ind];
        }
        int mid=(low+high)>>1;
        return min(query(2*ind+1,low,mid,l,r),query(2*ind+2,mid+1,high,l,r));
    }
    void update(int ind,int low,int high,int i,int val)
    {
        if(low==high)
        {
            seg[ind]=val;
            return;
        }
        int mid=(low+high)>>1;
        if(i<=mid)
        {
            update(2*ind+1,low,mid,i,val);
        }
        else
        {
            update(2*ind+2,mid+1,high,i,val);
        }
        seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    }
};
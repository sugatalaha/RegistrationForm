#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
void quicksort(vector<int> &arr,int i,int j)
{
    if(i>=j)
    {
        return;
    }
    // print(arr);
    int pivot=arr[i];
    int low=i,high=j;
    while(low<high)
    {
        while(arr[low]<=pivot && low<j)
        {
            low++;
        }
        while(arr[high]>=pivot && high>i)
        {
            high--;
        }
        if(low<high)swap(arr[low],arr[high]);
    }
    swap(arr[i],arr[high]);
    quicksort(arr,i,high-1);
    quicksort(arr,high+1,j);
}

int main()
{
    vector<int> arr={6,1,5,3,7};
    quicksort(arr,0,arr.size()-1);
    print(arr);
}
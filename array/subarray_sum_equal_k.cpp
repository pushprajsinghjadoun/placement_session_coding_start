#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //brute force
    // int count = 0;
    // for(int i=0;i<n;i++)
    // {
    //     int sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum+=arr[j];
    //         if(sum==k)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count<<endl;

    // optimized
    int count =0;
    unordered_map<int,int> mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            count++;
        }
        if(mp.find(sum-k)!=mp.end())
        {
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    cout<<count;
    return 0;
}
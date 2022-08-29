#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    unordered_map<int,int>::iterator itr;
    for(itr = mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}
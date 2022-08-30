#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<int,int> mp;
    int n = s.size();
    for(int i =0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int max =0;
    unordered_map<int,int>::iterator itr;
    for(itr = mp.begin(); itr!=mp.end();itr++)
    {
        if(max<itr->second)
        {
            max = itr->second;
        }
    }
    cout<<max;
    return 0;
}
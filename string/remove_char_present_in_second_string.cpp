#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    unordered_map<int,int> mp;
    int n1 = s1.size();
    int n2 = s2.size();
    for(int i =0;i<n2;i++)
    {
        mp[s2[i]]++;
    }
    string r;
    for(int i=0;i<n1;i++)
    {
        if(mp.find(s1[i])==mp.end())
        {
            r = r + s1[i];
        }
    }
    cout<<r;
    return 0;
}
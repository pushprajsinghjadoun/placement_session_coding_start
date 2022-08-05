#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v;

    cin>>n;
    while(n)
    {
     int r = n%2;
     n = n/2;
     v.push_back(r);   
    }
    
    for(int i=v.size()-1;i>-1;i--)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
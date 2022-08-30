#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = int(s[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        s[i] = char(arr[i]);
    }
    cout<<s;
    return 0;
}
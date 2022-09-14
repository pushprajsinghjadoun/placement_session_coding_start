#include <bits/stdc++.h>
using namespace std;

void swap_array(int *arr,int l, int r)
{
    if(l>=r/2) return;
    swap(arr[l],arr[r-l]);
    swap_array(arr,l+1,r);
}

bool ispali(string s,int l,int r)
{
    if(l>=r/2) return true;
    if(s[l]!=s[r-l]) return false;
    return ispali(s,l+1,r);
}

int main()
{
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // swap_array(arr,0,n-1);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    string s;
    cin>>s;
    int size = s.size();
    cout<<ispali(s,0,size-1);
    return 0;
}
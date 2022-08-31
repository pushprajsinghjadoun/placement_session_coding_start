#include <bits/stdc++.h>
using namespace std;


void printsub(int *arr,int i, int n,string s)
{
    if(i==n)
    {
        cout<<" ["<<s<<"]"<<endl;
        return;
    }
    printsub(arr,i+1,n,s+ to_string(arr[i])+" ");
    printsub(arr,i+1,n,s);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printsub(arr,0,n,"");
    return 0;
}
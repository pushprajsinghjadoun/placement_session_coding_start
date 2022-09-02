#include <bits/stdc++.h>
using namespace std;


void printing(int arr[], int l,int r,int sum=0)
{
    if(l>r)
    {
        cout<<sum<<" ";
        return;
    }
    printing(arr,l+1,r,sum+ arr[l]);
    printing(arr,l+1,r,sum);

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
    printing(arr,0,n-1);
    return 0;
}
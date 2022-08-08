#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r;
    cin>>n>>r;
    int arr[n];
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
        }
    }

    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
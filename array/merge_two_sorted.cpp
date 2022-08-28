#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,4,8,10,15};
    int arr1[3] = {3,6,11};
    
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr1)/sizeof(arr1[0]);
    int r[n1+n2];
    int t1 = 0, t2 =0;

    for(int i=0;i<(n1+n2)-1;i++)
    {
        if(arr[t1]>arr1[t2] && t2<n2-1)
        {
            r[i] = arr1[t2];
            t2++;
        }else
        {
            r[i] = arr[t1];
            t1++;
        }
    }
    for(int i=0;i<(n1+n2)-1;i++)
    {
        cout<<r[i]<<" ";
    }
    return 0;
}
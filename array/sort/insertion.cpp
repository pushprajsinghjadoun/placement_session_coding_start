#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,10,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

   for(int i=1;i<n;i++)
   {
    int current = arr[i];
    int j = i-1;
    while(arr[j]>current && j>=0)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = current;
   }


    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
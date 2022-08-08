#include <bits/stdc++.h>
using namespace std;

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

bool ispresent(int a[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(val==a[i])
        {
            return 1;
        }
    }
    return 0;
}

void deleteval(int a[], int n,int val)
{
    bool position = false;
    for(int i=0;i<n-1;i++)
    {
        if(val==a[i])
        {
            position = true;
        }
        if(position)
        {
            a[i] = a[i+1];
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    display(a,n);
    cout<<"\nSearch a value: ";
    int val;
    cin>>val;
    cout<<ispresent(a,n,val);
    deleteval(a,n,val);
    display(a,n);
    return 0;
}
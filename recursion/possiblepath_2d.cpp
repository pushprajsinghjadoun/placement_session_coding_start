#include <bits/stdc++.h>
using namespace std;

void printallpath(int i,int j,int n,int m,string s)
{
    if(i==n-1 && j==m-1)
    {
        cout<<s;
        cout<<endl;
        return;
    }
    if(i>=n or j>=m) return;
    printallpath(i,j+1,n,m,s=s+"D");
    printallpath(i+1,j,n,m,s=s+"R");
}

int main()
{
    int n,m;
    cin>>n>>m;
    printallpath(0,0,3,3,"");
    return 0;
}
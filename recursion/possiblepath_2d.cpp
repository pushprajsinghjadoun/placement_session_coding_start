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
void dicepath(int n, int i,string s)
{
    if(i>=n) return;
    if(i==n-1)
    {
        cout<<s<<endl;
        return;
    }
    for(int j=1;j<=n-1;j++)
    {
        dicepath(n,i+j,s+to_string(j)+"->");
    }
}

int main()
{
    
    //printallpath(0,0,3,3,"");
    dicepath(7,0,"");
    return 0;
}
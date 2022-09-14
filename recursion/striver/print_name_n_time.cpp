#include <bits/stdc++.h>
using namespace std;

void name(string na,int n)
{
    if(n==0)  return;
    cout<<na<<" ";

    name(na,n-1);
}

int main()
{
    int n;
    cin>>n;
    string na;
    cin>>na;
    name(na,n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printpat(int n,int b)
{
    if(n==0) return;
    if(b<n){ cout<<"* ";  printpat(n,b+1);}else { cout<<endl; printpat(n-1,0); }
    
}

int main()
{
    int n;
    cin>>n;
    printpat(n,0);
    return 0;
}
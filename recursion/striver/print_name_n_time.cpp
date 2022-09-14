#include <bits/stdc++.h>
using namespace std;

void name(string na,int n)
{
    if(n==0)  return;
    cout<<na<<" ";

    name(na,n-1);
}
void one_to_n(int n)
{
    if(n==0) return;
    one_to_n(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    // string na;
    // cin>>na;
    // name(na,n);
    one_to_n(n);
    return 0;
}
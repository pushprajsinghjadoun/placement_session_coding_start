#include <bits/stdc++.h>
using namespace std;

void print_natural(int n)
{
    if(n==0)
    {
        return;
    }
    
    print_natural(n-1);
    cout<<n<<" ";
    
}

int main()
{
    int n;
    cin>>n;
    print_natural(n);
    return 0;
}
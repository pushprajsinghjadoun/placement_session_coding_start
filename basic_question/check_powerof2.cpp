#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n%2==0)
    {
        n = n/2;
    }
    if(n==1) cout<<"Power  of 2 ";
    if(n!=1)  cout<<"Not a power of 2";
    return 0;
}
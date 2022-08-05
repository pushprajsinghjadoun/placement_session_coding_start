#include <iostream>
using namespace std;

int checkispime(int n)
{
    if(n==1 || n==0) return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

void printprime(int n)
{
    if(n>1) cout<<1<<" "<<2<<" ";
    for(int i=2;i<n;i++)
    {
        if(checkispime(i)) cout<<i<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<checkispime(n)<<endl;
    printprime(n);

    return 0;
}
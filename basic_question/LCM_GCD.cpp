#include <iostream>
using namespace std;

int lcm(int a,int b)
{
    int r = 1000;
    for(int i=a;i>1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            r = i;
        }
    }
    return r;
}

int gcd(int a,int b)
{
    int r = 1;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            r = i;
        }
    }
    return r;
}


int main()
{
    int a,b;
    cin>>a>>b;
    if(b>a)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    cout<<a<<" "<<b<<endl;
    cout<<gcd(a,b)<<" ";
    
    return 0;
}
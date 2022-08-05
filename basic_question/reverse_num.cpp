#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r = 0;
    if(n==0) return 0;
    while(n>0)
    {
        int re = n%10;
        n = n/10;
        if(r==0)
        {
            r = re;
        }else{
            r = r*10 + re;
        }
        
    }
    cout<<r<<endl;
    return 0;
}